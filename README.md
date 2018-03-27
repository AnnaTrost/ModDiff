# ModDiff
Modular Demand-Driven Analysis of Semantic Difference for Program Versions

tool and benchmarks


For the tool:
- Download cbmc-differential.zip anf unpack
- Compile cbmc using the instructions found there
- Compile to goto binaries your old and new versions using src/goto-cc/goto-cc 
- run the binary src/goto-diff/goto-diff old_binary new_binary --semantic-diff [--refine] (use refine flag if you want to use refinement).

For help contact atrost@cs.technion.ac.il
