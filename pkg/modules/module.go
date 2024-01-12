package modules



type Module interface {
	// Name of module
	Name() string
	// LoadBPF load bpf
	LoadBPF() error
	// UnloadBPF unload bpf
	UnloadBPF() error
	// Run user space code and attach kernel space hook
	Run() error
	// Shutdown stop user space code and detach kernel hook
	Shutdown() error
}