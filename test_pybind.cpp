/*

Links:
http://pybind11.readthedocs.io/en/stable/basics.html
https://pythonhosted.org/PyBindGen/tutorial.html
CMakeList.txt: https://github.com/pybind/pybind11/issues/698

Requirements:
For apt (Ubuntu, Debian...):

sudo apt-get install python-dev   # for python2.x installs
sudo apt-get install python3-dev  # for python3.x installs

For yum (CentOS, RHEL...):

sudo yum install python-devel

For dnf (Fedora...):

sudo dnf install python2-devel  # for python2.x installs
sudo dnf install python3-devel  # for python3.x installs

TEST:
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:.
export PYTHONPATH=$PYTHONPATH:.

python
from test_pybind import *
add(3, 4)

*/

#include <pybind11/pybind11.h>
namespace py = pybind11;

int add(int i, int j) { return i + j; }

PYBIND11_MODULE(test_pybind, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring

    m.def("add", &add, "A function which adds two numbers", py::arg("i"),
          py::arg("j"));
}
