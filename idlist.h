//////////////////////////////////////////////////////////////
//
// programmer: Clayton Wong
// idlist.h
// description: this list is used as a temporary storage
// device for productions such as: Ids -> , id Ids, where
// a variable amount of identifiers need to be stored.
//
//////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////
// structure IdListNode
//
typedef struct idlist_node
{
	char* name;
	char type;
	int length;
	int value;
	char* index;
	char* code;
	struct idlist_node* next;
} IdListNode;
//////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////
// structure IdList
//
typedef struct
{
        IdListNode* head;
} IdList;
//////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////
// function declarations
//
IdList* CreateList();
void InsertToList(IdList** list, char* name, char type, int length, char* index, char* code);
void AppendToList(IdList** list, IdList* toAppend);
//////////////////////////////////////////////////////////////

