x = 10
def local_func():
    y = 20
    print("Local variable y =", y)
    print("Global variable x =", x)
def enclosing_func():
    z = 30
    def nested_func():
        print("Enclosing variable z =", z)
        print("Global variable x =", x)
    nested_func()

local_func()

enclosing_func()

print("Global variable x =", x)

print("Built-in variable __name__ =", __name__)

#Reference Count in python
#Python keeps a count of the number of reference to an object.
# a=10
# print(a)
# a=20
# print(a)
# a=30
# print(a)
# a=40
# print(a)
# a=50
# print(a)
# del(a)
# print(id(a))


result1 = 3 ** 2 + 8 // 3 * 2
print(result1)