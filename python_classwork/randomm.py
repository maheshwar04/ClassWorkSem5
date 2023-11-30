import random

random.seed(42)

x = random.random()
print(x)

y = random.randint(1, 10)
print(y)

z = random.choice(["apple", "banana", "cherry"])
print(z)

a = [1, 2, 3, 4, 5]
random.shuffle(a)
print(a)

b = random.sample(a, 3)
print(b)

random.seed(25)

x = random.random()
print(x)

y = random.randint(1, 10)
print(y)

z = random.choice(["apple", "banana", "cherry"])
print(z)

a = [1, 2, 3, 4, 5]
random.shuffle(a)
print(a)

b = random.sample(a, 3)
print(b)