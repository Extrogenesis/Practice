# https://effbot.org/zone/python-with-statement.htm



#first understand "try, finally" in python

value = None
try:
    something
finally:
    clean-up

# this construct guarantees that "clean-up " is always executed

# for easy reuse and DRY/DIE wrap in function 

def controlled_execution(callback):
    value = None
    try:
        callback(thing)
    finally:
        clean-up

def my_func(thing):
    do something

controlled_execution()
        
# functional but can be written with less lines of code



def controlled_execution():
    value = None
    try:
        yield thing
    finally:
        clean-up

    for thing in controlled_execution():
        do something with thing