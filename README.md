# briosh

Briosh (pronounced "brioche") is currently an experimental, lightweight, distributed OS focusing on performance.

## Design Principles

The goal of this project is to provide the following: 
* *Very lightweight processes* : context-switching is as cheap as a couple jumps.
* *Stream-based IPCs* : This  
* *Native code* : virtual machines have a cost.
* *cleaner code design* : bring the best from C++, D, Rust and Elixir - high modularity - well-defined interfaces
* *Safety and reliability* : as many things as possible are taken out of the kernel. In fact, you can pick whatever kernel you want as long as it provides some basic POSIX functions like `malloc`.
* *Focus on isolation and security* : even if all processes share the same memory space, great care is taken at load time to make sure that a rogue process won't tamper with other processes's code.
