#Q1
#test1.a is in the global namespace and can be accessed and modified by both test11 and test2. When test2 changes the value of test1.a to 8, it affects the value of test1.a in test1 as well.
def test1():
    test1.a=10
    def test2():
        test1.a=8
        print("Inside test2, a=", test1.a)
    test2()
    print("Outside test2, a=", test1.a)
test1()

#Q2
#The local variable a in test1 and test2 are in different namespaces and do not affect each other. When test2 changes the value of a to 8, it only changes the value of a in it's own local namespace, not the value of a in test1.
def test1():
    a=10
    def test2():
        a=8
        print("Inside test2, a=", a)
    test2()
    print("Outside test2, a=", a)
test1()

#Q3
#The nonlocal keyword allows the nested function test2 to access and modify the variable a in the enclosing namespace of test1. When test2 changes the value of a to 8, it also changes the value of a in test1.
def test1():
    a=10
    def test2():
        nonlocal a
        a=8
        print("Inside test2, a=", a)
    test2()
    print("Outside test2, a=", a)
test1()

#Q4
#This is because the nonlocal keyword allows the nested functions g and h to access and modify the variable a in the enclosing namespace of f. When g changes the value of a to 10, it also changes the value of a in f. When h changes the value of a to 20, it also changes the value of a in g and f
def f():
    a=5
    def g():
        nonlocal a
        a=10
        print("a=", a)
        def h():
            nonlocal a
            a=20
            print("a=", a)
        h()
    g()
    print("a=", a)
f()