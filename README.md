# briosh

Briosh (pronounced "brioche") is currently an experimental, lightweight, distributed OS focusing on performance.

## Design Principles

The goal of this project is to provide the following: 
* *Very lightweight processes* : context-switching is as cheap as a couple jumps.
* *Stream-based IPCs* : Inter-processed communication is based on _streams_, a concept seen in Elixir, Scala, Java 8+ and many other languages.
* *Native code* : virtual machines have a cost.
* *cleaner code design* : bring the best from C++, D, Rust and Elixir - high modularity - well-defined interfaces
* *Safety and reliability* : as many things as possible are taken out of the kernel. In fact, you can pick whatever kernel you want as long as it provides some basic POSIX functions like `malloc`.
* *Focus on isolation and security* : even if all processes share the same memory space, great care is taken at load time to make sure that a rogue process won't tamper with other processes's code.

### Lightweight processes

To ensure that context switching is as cheap as possible, all processes share the same address space. This not only means that the OS can run on systems without a MMU, but also that switching between processes is a cheap as a couple (long) jumps.

### Stream-based IPCs

Processes spend most of their lifetime waiting for data to be available in their input streams and processing it while storing the result in their output streams. This offer several advantages:
* Failing processes in a processing list can easily be restarted.
* It is possible to load-balance heavy-duty operations by parallelizing key processes in a data processing pipeline.
* Since context switching is fast, active parts of the pipeline quickly get activated, thus making sure that the execution time is allocated where it is needed the most.

### Native code
