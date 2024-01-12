package syscall

import (
	"github.com/aquasecurity/libbpfgo"
)

const name string = "syscall"

type module struct {

}

func (m* module) LoadBPF() error {
	return nil
}
// UnloadBPF unload bpf
func (m* module) UnloadBPF() error {

}

// Run user space code and attach kernel space hook
func (m* module) Run() error {

}

// Shutdown stop user space code and detach kernel hook
func (m* module) Shutdown() error {

}
