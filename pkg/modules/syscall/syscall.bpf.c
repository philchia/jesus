#include <bpf/bpf.h>
#include <bpf/types.h>

SEC("kprobe/sys_execve")
int capture_syscall(struct pt_regs *ctx)
{
    struct syscall_args_t {
        __u64 arg1;
        __u64 arg2;
        __u64 arg3;
        __u64 arg4;
        __u64 arg5;
        __u64 arg6;
    };

    struct syscall_args_t args = {
        .arg1 = PT_REGS_PARM1(ctx),
        .arg2 = PT_REGS_PARM2(ctx),
        .arg3 = PT_REGS_PARM3(ctx),
        .arg4 = PT_REGS_PARM4(ctx),
        .arg5 = PT_REGS_PARM5(ctx),
        .arg6 = PT_REGS_PARM6(ctx),
    };

    // Do something with the captured syscall parameters

    return 0;
}
