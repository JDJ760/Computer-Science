#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

struct Box {
	
	int id;
	string name;
	Box* next;

};



void insert(Box*& head);
void deleteBox(Box*& head);
void displayLeftToRight(Box* head);
void insertNewBox(Box*& head);
void displayRightToLeft(Box* headd);
int getSize(Box* head);
void moveIgnore();
void space_bar();
bool isEmpty(Box* head);
void clearList(Box*& head);



int main() {

	Box* head = nullptr;
	int number{};
	char answer{};

	cout << "How many Box's? ";
	cin >> number;


	for (int i = 0; i < number; i++) {
		cout << " Enter the data for box #" << i + 1 << ": ";
		insert(head);
	}




	cout << "Here is the data from the list\n";

		displayLeftToRight(head);

	cout << "Would you like to delete a box?";
	cin >> answer;

	while (toupper(answer) == 'Y') {
		deleteBox(head);
		cout << "Would you like to delete another?";
		cin >> answer;
	}


	cout << "Here is the updated list\n";

		displayRightToLeft(head);

	return 0;

}

  



void moveIgnore() {
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

}






void insert(Box*& head) {
	Box* ptr = new Box;

	cout << "Enter the id: ";
	cin >> ptr->id;

	moveIgnore(); 


	cout << "Enter the name: ";
	getline(cin, ptr->name);

	ptr->next = head;
	head = ptr;

}






void deleteBox(Box*& head) {

	Box* lead = head;
	Box* follow = nullptr;

	if (head == nullptr) {
		cout << "\nThe List is empty\n";
		return;
	}
	int deleteId{};

	cout << "Enter ID to delete: ";
	cin >> deleteId;

//If the first box is the one to delete
	if (lead->id == deleteId) {
		head = lead->next;
		delete lead;

		cout << "The Box was deleted\n";
		return;
	}

	// Search for the box with the id
	while (lead != nullptr && lead->id != deleteId) {
		follow = lead;
		lead = lead->next;
	}

	//not in the list
	if (lead == nullptr) {
		cout << "The ID is not in the list\n";
		return;
	}

	follow->next = lead->next;

	delete lead;

	cout << "Box was deleted!";



}


void space_bar() {
	cout << "----------------------\n";

}


void displayLeftToRight(Box* head) {
	space_bar();

	cout << "----------------------\n";
	while (head != nullptr) {
		cout << "ID\t" << head->id << "\tName;\t" << head->name << endl;
		head = head->next;
	}
}





void insertNewBox(Box*& head) {
	Box* ptr = new Box();

	char choice{};

	cout << "\nInsert at the front?";
	cin >> choice;

	if (toupper(choice) == 'Y');
	{
		cout << "Enter the ID: ";
		cin >> ptr->id;

		moveIgnore();

		cout << "Enter Name";
		getline(cin, ptr->name);

		ptr->next = head;
		head = ptr;

		return;
	}

	cout << "\nADD at the end? ";
	cin >> choice;

	if (toupper(choice) == 'Y');
	{
		cout << "Enter the ID: ";
		cin >> ptr->id;

		moveIgnore();

		cout << "Enter Name";
		getline(cin, ptr->name);

		ptr->next = nullptr;

		if (head == nullptr) {

			head = ptr;
			return;
		}




		Box* temp = head;
		/// move along
		while (temp->next != nullptr) {
			temp = temp->next;

		}

		temp->next = ptr;
		return;


	}
	
	int id{};

	cout << "After which id should i insert the box?";
	cin >> id;
	
	Box* temp = head;

	while (temp != nullptr && temp->id != id) {
		temp = temp->next;
	}

	if (temp == nullptr) {

		cout << " \nID not found. Inserting at the end of the list.\n";

		if (head == nullptr) {
			head = ptr;
		}

		else {
			temp = head;
			while (temp->next != nullptr) 
				temp = temp->next;

				temp->next = ptr;
		
		
			
		}
		return;

	}

	cout << "Enter the ID: ";
	cin >> ptr->id;

	moveIgnore();

	cout << "Enter Name";
	getline(cin, ptr->name);
	
	ptr ->next = temp ->next;
	temp->next = ptr;

}





void displayRightToLeft(Box* head) {

	if (head == nullptr) {
		return;
	}
	displayRightToLeft(head->next);
	cout << "ID\t" << head->id << "\tName;\t" << head->name << endl;
}





int getSize(Box* head) {

	if (head == nullptr)
		return 0;
	return 1 + getSize(head->next);

}







bool isEmpty(Box* head) {
	return (head == nullptr);

}




void clearList(Box*& head) {

	cout << "\n============ Clear the List ===================\n";

	int count = 0;

	while (head != nullptr) {
		Box* toDelete = head;

		head = head->next;
		delete toDelete;

		count++;

	}
	cout << "Freed" << count << "Boxes. List is clear\n\n";

}