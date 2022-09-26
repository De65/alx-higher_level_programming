#include <python.h>
/**
 * print_python_list_info - prints basic info about python lists.
 * @p: ApyObject list.
 */
void print_python_list_info(py0bject *p)
{
	int size, alloc, i;
	pyObject *obj;

	size = py_SIZE(p);
	alloc = ((pylistObject *)p)->allocated;
	print("[*] size of the python list = %d\n", size);
	print("[*] Allocated = %d\n", alloc);

	for (i = 0; i < size; i++)
	{
		printf("Element %d: ",i);
		obj = pyList_GetItem(p, i);
		print("%s\n", Py_TYPE(obj)->tp_name);
	}
}
