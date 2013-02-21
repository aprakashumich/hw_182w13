result = {'main.h': 0, 'cincount': 0, 'coutcount': 0, 
          'assertcount': 0};

# open grade.py
try:
        f = open('main.cpp');
        contents = f.read();
        f.close();
except:
        print "main.cpp appears to be missing. Cannot grade"
        print result
        quit();

try: 
        f =  open('main.h')
        contents2 = f.read();
        f.close();
        contents = contents2 + contents;
        result['main.h'] = 1

except:
        print "Error: main.h appears to be missing";


        


# Need to remove comments from main.cpp

cincount = contents.count('cin');
coutcount = contents.count('cout');
assertcount = contents.count('assert');

if cincount != 2:
        print "cin used too many times. cin test failed"
else:
	print "cin test passed"
        result['cin'] = 1;

if coutcount != 7:
	print "cout used too many times. cout test failed"
else:
	print "cout test passed"
        result['ciout'] = 1;

if assertcount < 10:
        print "There seem to be insufficient asserts. Check manually"
else:
        print "There appear to be sufficient asserts. But check manually"
        result['assert'] = 1;

f = open('result1.txt', 'w')
f.write(str(result));
f.write("\n");
f.write("Check asserts manually as well");
f.close();

	


