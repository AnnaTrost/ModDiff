# ModDiff
Modular Demand-Driven Analysis of Semantic Difference for Program Versions.

Paper: https://link.springer.com/chapter/10.1007/978-3-319-66706-5_20

tool and benchmarks


For the tool:
- Download cbmc-differential.zip anf unpack
- Compile cbmc using the instructions found there
- Compile to goto binaries your old and new versions using src/goto-cc/goto-cc 
- run the binary src/goto-diff/goto-diff old_binary new_binary --semantic-diff [--refine] (use refine flag if you want to use refinement).


NOTE: The implementation of the tool is a very basic POC. For example things that are not supported:
- Pointers.
- Multiple calls to the same function (or calling a function whithin a loop).

For help contact atrost@cs.technion.ac.il
