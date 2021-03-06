# csLab-5#include <iostream>
using namespace std;



struct node // structure having variable for data section and a pointer for the next node. 
{
 int data;
 node *next;
 };	

   class linkedList //  class  containing the functions to handle the nodes
{
 private:

    node *head, *tail; //Declaring two important pointers, i.e. head and tail
 public:

    linkedList() //The constructer will make them NULL to avoid any garbage value.
 {
  head=NULL;
 tail=NULL;

  }
 void insert(int value) // Function to enter values at the end of list

    {

      node *temp=new node;

      temp->data=value;

 temp->next=NULL;
 if(head==NULL)  //When the list is empty

     {
       head=temp;
      	
      }

    else

        tail->next=temp;
        tail=temp;

    }

int countItems() //To count the number of elements in the list

    {       int count=0;
    	node *temp=new node;
	temp= head;

    	while(temp!=NULL)
    { temp=temp->next;
           count++;
         }
	return count;

    }

   void display()// to display the elements of the list

    {
   	node*temp= new node;
    	temp=head;
    	cout<<" list is:\n";
    	while(temp!=NULL)

    	{
    		cout<<temp->data<<"->";
    		temp=temp->next;
	}
    cout<<"NULL"<<endl;
   }
   int sortrimil(int n) //Arranging the list's element in ascending order using bubblesort
{           node *p=new node;
	node *q=new node;
	
	
for (int i=0;i<n;i++)
    {      p=head;
	
	for (int j=0;j<(n-i)-1;j++)
   {
   	if(p->data > p->next->data)   
   	{
   	q->data=p->data;           //swapping the values to arrange in proper order
   	p->data=p->next->data;
   	p->next->data=q->data;
   		
   	}
   	p=p->next;
   }
    }
    return 0;
}
};



int main() {

 linkedList l; // Declaring object of class linkedList
 

 l.insert(9);  //calling insert function to insert elements
 l.insert(7);
 l.insert(2);
 l.insert(3);
 cout<<"The unsorted ";
 l.display(); //calling display function to print the unsorted list

 int n=l.countItems(); //calling the counItems funtion to calculate the total number of elements
 
 
 l.sortrimil(n);  //calling sort function to rearrange the array elements
 cout<<"The sorted ";
 l.display();  //calling the display function to print the sorted array

	return 0;
}
