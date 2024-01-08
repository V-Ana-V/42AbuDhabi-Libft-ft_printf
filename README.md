# 42-Abu-Dhabi
## Libft
testers I used:
1) Francinette
  (https://github.com/xicodomingues/francinette)https://github.com/xicodomingues/francinette
2) Tripouille
  https://github.com/Tripouille/libftTester
3) War Machine
  https://github.com/0x050f/libft-war-machine
4) Unit tester
https://github.com/alelievr/libft-unit-test

The code below have passed Moulinette. The only issue (that wasn't caught by Moulinette, but evaluators pointed it out) is an additional condition in ft_atoi.c.

Real atoi returns (-1) or (0) is it is iveflowed in long long. It is important to add such a case to ft_atoi.c.
