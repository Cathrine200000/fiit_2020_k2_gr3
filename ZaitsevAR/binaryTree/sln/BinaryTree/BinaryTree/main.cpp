#include "BinarySearchTree.h"

int main()
{
	cout << "\t\t-----------------------------------------------" << endl;
	cout << "\t\t----------Example for deleting a node----------" << endl;
	cout << "\t\t-----------------------------------------------" << endl;

	Node tree(50); // ������ �� ������

	srand(time(0));
	for (int i = 0; i < 10; i++) // ��� ������� ������� � ������ ���� ��� 10
	{
		int number = rand() % 100;
		Node node(number);
		Node::insertNode(&tree, &node);
	}

	cout << " Keys of your tree:\n" << tree << endl << endl;

	int n;
	cout << " Enter one of the following numbers to delete the node with this key: ";
	cin >> n;
	tree.removeNode(Node::searchNode(&tree, n));

	cout << " Keys of your tree:\n" << tree << endl << endl;

	system("pause");
	return 0;
}