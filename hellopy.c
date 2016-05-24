#include <Python.h>
#include <stdio.h>

/*****************************************************************************/
/*                                                                           */
/* Actual module method definition - this is the code that will be called by */
/* hellopy.print_hello_world                                                 */
/*                                                                           */
/*****************************************************************************/
static PyObject* hellopy_print_hello_world(
PyObject *self, 
PyObject *args)
{
    printf("Hello World\n");
    Py_RETURN_NONE;
}

/*****************************************************************************/
/*                                                                           */
/* Method definition object for this extension, these argumens mean:         */
/* ml_name: The name of the method                                           */
/* ml_meth: Function pointer to the method implementation                    */
/* ml_flags: Flags indicating special features of this method, such as       */
/*        accepting arguments, accepting keyword arguments, being a          */
/*        class method, or being a static method of a class.                 */
/* ml_doc:  Contents of this method's docstring                              */
/*                                                                           */
/*****************************************************************************/
static PyMethodDef hellopy_methods[] = { 
    {   
        "print_hello_world",
        hellopy_print_hello_world,
        METH_NOARGS,
        "Print 'hello world' from a method defined in a C extension."
    },  
    {NULL, NULL, 0, NULL}
};

/*****************************************************************************/
/*                                                                           */
/* Module definition                                                         */
/* The arguments of this structure tell Python what to call your extension,  */
/* what it's methods are and where to look for it's method definitions       */
/*                                                                           */
/*****************************************************************************/
static struct PyModuleDef hellopy_definition = { 
    PyModuleDef_HEAD_INIT,
    "hellopy",
    "A Python module that prints 'hello world' from C code.",
    -1, 
    hellopy_methods
};

/*****************************************************************************/
/*                                                                           */
/* Module initialization                                                     */
/* Python calls this function when importing your extension. It is important */
/* that this function is named PyInit_[[your_module_name]] exactly, and      */
/* matches the name keyword argument in setup.py's setup() call.             */
/*                                                                           */
/*****************************************************************************/
PyMODINIT_FUNC PyInit_hellopy(void)
{
    Py_Initialize();

    return PyModule_Create(&hellopy_definition);
}
