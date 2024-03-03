# Table of contents

1. Single cycle approach
2. Multi cycle approach
   1. FSM implementation of control 
   2. See textbook (first edition chapter 5) for details
3. Pipelining
   1. Multicycle data path cannot implement pipelining
      1. Missing adders, the ALU is used at each microstep
      2. Only 1 ALU, need multiple ALUs for each partition
   2. Singlecycle dath path cannot implement pipelining
      1. Need micro-architectural state to partition data path
   3. Take-away
      1. Combine elements from multicycle (microarch state) and singlecycle (multiple adders)