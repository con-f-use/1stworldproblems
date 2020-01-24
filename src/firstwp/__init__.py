def dummy_function(*ar, **kw):
    print("Dummy {} {}".format(repr(ar), repr(kw)))
    return True, ar, kw

