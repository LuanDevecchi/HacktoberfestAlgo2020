import numpy as np


def is_prime(x):
    if x != int(x):
        return False
    if x < 2:
        return False
    else:
        for i in range(2, int(x/2) + 1):
            if x % i == 0:
                return False
        return True
    

NUM_PRIMES=100
print('finding first {} prime numbers...'.format(NUM_PRIMES))

primes = []
times = []

x = 2

n_show = 10
step_show = int(NUM_PRIMES / n_show)

while len(primes) < NUM_PRIMES:
	if is_prime(x):
		primes.append(x)
		if len(primes) % step_show == 0:
			print('{}: {}'.format(len(primes), x))
	x += 1

   
print(primes)
