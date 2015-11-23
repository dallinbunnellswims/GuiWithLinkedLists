#include "LinkedList.h"
#include "MyForm.h"



LinkedList::LinkedList()
{
	head = 0;
	tail = 0;
}
LinkedList::~LinkedList()
{
	PictureNode *node = head;
	while (node != 0) 
	{
		delete node;
	}
}
void LinkedList::add(std::string path)
{
	insert(size(), path);
}
void LinkedList::insert(int pos, std::string path)
{
	PictureNode *instertedPicture = new PictureNode;
	instertedPicture->picturePath = path;
	instertedPicture->next = 0;
	PictureNode *picture_at_pos = walkToPosition(pos);
	if (picture_at_pos == 0)
	{
		head = instertedPicture;
		head->next = 0;
		head->prev = 0;
	}
	else
	{
		instertedPicture->next = picture_at_pos->next;
		picture_at_pos->next = instertedPicture;
		instertedPicture->prev = picture_at_pos;
	}
	
	
}
void LinkedList::remove(int pos)
{}
void LinkedList::set(int pos, std::string value)
{}
int LinkedList::size()
{}
std::string  LinkedList::get(int pos)
{}
PictureNode * LinkedList::walkToPosition(int position)
{
	int tmp_pos = 0;
	PictureNode *tmp_node = head;
	while (tmp_pos < position) {
		tmp_pos++;
		if (tmp_node->next != 0) {
			tmp_node = tmp_node->next;
		}
		if (tmp_node->next == 0) {
			break;
		}
	}
	return tmp_node;
}