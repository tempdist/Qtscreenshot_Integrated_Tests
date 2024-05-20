# screenshot
This application is available directly from Qt in Qt Creator as an example for QWidgets.
What I have done here is extended the CMakeLists and CMakeCache to include both gTests and qTests.
You can test your logic with gTest and the response to UI elements with different qTests.
The reason why stock Qt Creator application is taken is to demonstrate that you can start testing any Qt Widget based
application/software and learn about the internal working of Qt Widgets, test their durability etc.
More tests may be added as and when I find new fascinating methods to inject tests on UI. 
Another choice which is made here upon research on speed and dependencies is that whole of Googletest package is included
with the application itself. This makes it easier to keep building on the application without having to compile the tests separately.

Also, please remember to update your CMakeLists and CMakeCache before you can compile and run your tests.