#include "LinkedList.h"
#include "MyForm.h"



LinkedList::LinkedList() //creat a list and start with giving head and tail 0
{
	head = 0;
	tail = 0;
}
LinkedList::~LinkedList() //getting rid of the list
{
	PictureNode *node = head;
	while (node != 0) //while there is a node
	{
		delete node;
	}
}
void LinkedList::add(std::string path) //adds tp the end
{
	insert(size(), path); //figures out the size (the end) and the path then sends to the insert function. 
}
void LinkedList::insert(int pos, std::string path)//inserts a picture at a given location
{
	//create a new picture and give it some data
	PictureNode *insertedPicture = new PictureNode;
	insertedPicture->picturePath = path;
	insertedPicture->next = 0;
	//we need another pointer to the picture at the position before where we want to insert
	//so walk to that position and assign that position to a new pointer
	PictureNode *picture_at_pos = walkToPosition(pos);
	//now do the inserting
	if (picture_at_pos == 0) //if it's the very first node
	{
		head = insertedPicture;
		head->next = 0;
		head->prev = 0;
	}
	else
	{
		//assign the inserted picture's next to the previous picutures next (inserting into position)
		insertedPicture->next = picture_at_pos->next;
		//reassigns the previous pictures's next to the new picture
		picture_at_pos->next = insertedPicture;
		//reassigns the inserted picture to the previous picture
		insertedPicture->prev = picture_at_pos;
		//reassign the next picture's previous to the inserted picture
		if (insertedPicture->next != 0)
		{
			insertedPicture->next->prev = insertedPicture;

		}
		
	}
	
	
}
void LinkedList::remove(int pos)
{

}
void LinkedList::set(int pos, std::string value) //sets a new path to a picure at a certain position
{
	PictureNode *pic = walkToPosition(pos);
	pic->picturePath = value;
}
int LinkedList::size() //returns the size of the list
{
	int number_of_pictures = 0;//start with no picutes
	PictureNode *start = head; //create a pointer and assign it to the start
	if (head != 0) //meaning there has to be a head
	{
		number_of_pictures++; //increment, bc there is at least 1
		while (start->next != 0)//loop until there isn't a next
		{
			number_of_pictures++; //keep counting
			start = start->next; //move the pointer through the linked list
		}
	}

}
std::string  LinkedList::get(int pos)//returns the path of a picture at a position
{
	PictureNode *pic = walkToPosition(pos);
	return pic->picturePath;
}
PictureNode * LinkedList::walkToPosition(int position) 
//creates a pointer to a temporary position and travels to a desired position.
//so we don't have to get to the postions in each method. returns that position.
{
	int tmp_pos = 0;
	PictureNode *tmp_node = head; //start at the start
	while (tmp_pos < position) //while tmp_pos is not 0
	{
		tmp_pos++; //increment
		if (tmp_node->next != 0) //move
		{
			tmp_node = tmp_node->next;
		}
		if (tmp_node->next == 0) //or break if it's the end
		{
			break;
		}
	}
	return tmp_node;
}