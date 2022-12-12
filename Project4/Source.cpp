#include<iostream>
#include <stdio.h>
#include <conio.h>
#include<string>
#include<assert.h>
#include<string.h>
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<fstream>
#include<vector>
using namespace std;


template<class T>
class Stack {
	T* data;
	size_t size = 0;
public:
	Stack() :data(NULL), size(NULL) {}
	int Push(const T& newdata) {
		auto newarray = new T[size + 1]{};
		for (size_t i = 0; i < size; i++)
		{
			newarray[i] = data[i];
		}
		newarray[size] = newdata;
		if (size != 0) {
			delete[]data;
		}
		data = newarray;
		newarray = nullptr;
		++size;
		return 0;
	}
	void Pop(const int& index = -1) {
		if (index != -1) {
			auto newitems = new T[size - 1]{};
			for (size_t i = 0; i < index; i++)
			{
				newitems[i] = data[i];
			}
			int index1 = index + 1;
			int index2 = index;
			for (size_t i = 0; i < size - (index + 1); i++)
			{
				newitems[index2] = data[index1];
				index1++;
				index2++;
			}
			data = newitems;
			newitems = nullptr;
			size -= 1;
		}
		else {
			auto newitems = new T[size - 1]{};
			for (size_t i = 0; i < size - 1; i++)
			{
				newitems[i] = data[i];
			}
			data = newitems;
			newitems = nullptr;
			size -= 1;
		}
	}
	int Peek()const {
		assert(size > 0 && "Empty Stack");
		return data[size - 1];
	}
	void Clear() {
		if (this->data == NULL || this->size == NULL) {
			return;
		}
		delete[]data;
		this->data = NULL;
		this->size = NULL;
	}
	void Show()const {
		for (size_t i = 0; i < size; i++)
		{
			cout << data[i] << endl;
		}
	}
	size_t GetSize()const {
		return size;
	}

	T& operator[](int index) {
		assert(index >= 0 && index <= size && "Invalid Index");
		return data[index];
	}
	~Stack()
	{
		//delete[]data;
	}
};

//class Person {
//	int age;
//	string name;
//public:
//	Person() = default;
//	Person(const int& age, const string& name) {
//		this->age = age;
//		this->name = name;
//	}
//
//	void Show() {
//		cout << "Age : " << age << age;
//		cout << "Name : " << name << endl;
//	}
//};





void mysetcolor(int fg, int bg) {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, fg | (bg << 4));
}

void restaranTName() {
	auto rectangle = (char)219;
	auto squareBottom = (char)220;
	auto squareUpper = (char)223;

	mysetcolor(6, 0);
	cout << endl;
	cout << "                               " << squareBottom << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << "   " << squareBottom << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << "      " << rectangle << rectangle << rectangle << "              " << squareBottom << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << squareBottom << "    " << squareBottom << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << squareBottom << endl;
	cout << "                              " << rectangle << rectangle << rectangle << "    " << rectangle << rectangle << rectangle << "  " << rectangle << rectangle << rectangle << "    " << rectangle << rectangle << rectangle << "  " << squareUpper << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << squareBottom << "         " << rectangle << rectangle << rectangle << "    " << rectangle << rectangle << rectangle << "  " << rectangle << rectangle << rectangle << "    " << rectangle << rectangle << rectangle << endl;
	cout << "                              " << rectangle << rectangle << rectangle << "    " << rectangle << squareUpper << "   " << rectangle << rectangle << rectangle << "    " << rectangle << rectangle << rectangle << "     " << squareUpper << rectangle << rectangle << rectangle << squareUpper << squareUpper << rectangle << rectangle << "         " << rectangle << rectangle << rectangle << "    " << squareUpper << squareUpper << "   " << rectangle << rectangle << rectangle << "    " << rectangle << rectangle << rectangle << endl;
	mysetcolor(1, 0);
	cout << "                             " << squareBottom << rectangle << rectangle << rectangle << squareBottom << squareBottom << squareBottom << "      " << rectangle << rectangle << rectangle << "    " << rectangle << rectangle << rectangle << "      " << rectangle << rectangle << rectangle << "   " << squareUpper << "        " << squareBottom << rectangle << rectangle << rectangle << "         " << rectangle << rectangle << rectangle << "    " << rectangle << rectangle << rectangle << endl;
	cout << "                            " << squareUpper << squareUpper << rectangle << rectangle << rectangle << squareUpper << squareUpper << squareUpper << "   " << squareUpper << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << "      " << rectangle << rectangle << rectangle << "           " << squareUpper << squareUpper << rectangle << rectangle << rectangle << " " << rectangle << rectangle << rectangle << rectangle << squareBottom << "   " << rectangle << rectangle << rectangle << "    " << rectangle << rectangle << rectangle << endl;
	cout << "                              " << rectangle << rectangle << rectangle << "    " << rectangle << squareBottom << "   " << rectangle << rectangle << rectangle << "    " << rectangle << rectangle << rectangle << "      " << rectangle << rectangle << rectangle << "             " << rectangle << rectangle << rectangle << "    " << rectangle << rectangle << rectangle << "  " << rectangle << rectangle << rectangle << "    " << rectangle << rectangle << rectangle << endl;
	cout << "                              " << rectangle << rectangle << rectangle << "    " << rectangle << rectangle << rectangle << "  " << rectangle << rectangle << rectangle << "    " << rectangle << rectangle << rectangle << "      " << rectangle << rectangle << rectangle << "             " << rectangle << rectangle << rectangle << "    " << rectangle << rectangle << rectangle << "  " << rectangle << rectangle << rectangle << "    " << rectangle << rectangle << rectangle << endl;
	cout << "                              " << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << "  " << rectangle << rectangle << rectangle << "    " << rectangle << squareUpper << "      " << squareBottom << rectangle << rectangle << rectangle << rectangle << squareUpper << "           " << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << squareUpper << "    " << squareUpper << rectangle << rectangle << rectangle << rectangle << rectangle << rectangle << squareUpper << endl;
	mysetcolor(7, 0);
}



void GoodBye() {
	cout << "                             _______   ______     ______    _______  .______   ____    ____  _______ " << endl;
	cout << "                            /  _____| /  __  \\   /  __  \\  |       \\ |   _  \\  \\   \\  /   / |   ____|" << endl;
	cout << "                           |  |  __  |  |  |  | |  |  |  | |  .--.  ||  |_)  |  \\   \\/   /  |  |__  " << endl;
	cout << "                           |  | |_ | |  |  |  | |  |  |  | |  |  |  ||   _  <    \\_    _/   |   __| " << endl;
	cout << "                           |  |__| | |  `--'  | |  `--'  | |  '--'  ||  |_)  |     |  |     |  |____" << endl;
	cout << "                            \\______|  \\______/   \\______/  |_______/ |______/      |__|     |_______|" << endl;
}


class ClientNotification {
	string content;
	string tableNo;
public:
	ClientNotification() = default;
	ClientNotification(const string& content, const string& tableNo) {
		SetContent(content);
		SetTableNo(tableNo);
	}

#pragma region Setters
	void SetContent(const string& content) {
		if (!content.empty()) {
			this->content = content;
		}
		//throw "Content is null of client notification";
	}
	void SetTableNo(const string& tableNo) {
		if (!tableNo.empty()) {
			this->tableNo = tableNo;
		}
		//throw "No of table is empty";
	}
#pragma endregion

#pragma region Getters
	string GetTableNo()const noexcept {
		return tableNo;
	}
	string GetContent()const noexcept {
		return content;
	}
#pragma endregion

	friend ostream& operator<<(ostream& out, const ClientNotification& clientnotifications);
};

ostream& operator<<(ostream& out, const ClientNotification& clientnotifications) {
	out << "Content : " << clientnotifications.GetContent() << endl;
	out << "Table NO : " << clientnotifications.GetTableNo() << endl;
	return out;
}

class Ingredient {
	int id;
	string name;
	double price;
	double calories;
public:
	static int productCount;
	static int ID;
	Ingredient() = default;
	Ingredient(const string& name, const double& price, const double& calories, const int& productCount) {
		SetID(ID++);
		SetName(name);
		SetPrice(price);
		SetCalories(calories);
		SetProductCount(productCount);
	}
#pragma region Setters
	void SetName(const string& name) {
		assert(!name.empty() && "Name of product is null");
		this->name = name;
	}
	void SetCalories(const double& calories) {
		assert(calories > 0 && "Calories of product is negative or equal to 0");
		this->calories = calories;
	}
	void SetPrice(const double& price) {
		assert(price >= 0 && "Price of product is negative or equal to 0");
		this->price = price;
	}
	void SetID(const int& id) {
		this->id = id;
	}
	void SetProductCount(const int& productCount) {
		assert(productCount > 0 && "Product count will be more than 0");
		this->productCount = productCount;
	}
#pragma endregion
#pragma region Getters
	double GetPrice()const {
		return price;
	}
	double GetCalories()const {
		return calories;
	}
	string GetName()const {
		return name;
	}
	int GetID()const {
		return id;
	}
	int GetProductCount()const {
		return productCount;
	}
#pragma endregion
	friend ostream& operator<<(ostream& out, const Ingredient& products);
};
ostream& operator<<(ostream& out, const Ingredient& products) {
	out << "Product name : " << products.GetName() << endl;
	out << "Product calories : " << products.GetCalories() << endl;
	return out;
}

int Ingredient::productCount = 0;
int Ingredient::ID = 1;

class Meal {
	int id;
	double price;
	Stack<Ingredient>ingredient;
	double allCalories;
	string name;
public:
	static int ID;
	Meal() = default;
	Meal(const double& price, const string& name) {
		SetId(ID++);
		SetPrice(price);
		SetName(name);
	}

	void SetId(const int& id) {
		this->id = id;
	}

	void SetPrice(const double& price) {
		assert(price > 0 && "Price of Meal is negative or equal to 0");
		this->price = price;

	}

	void SetName(const string& name) {
		assert(!name.empty() && "Name of Meal is null");
		this->name = name;
	}

	int GetID()const {
		return id;
	}

	double GetPrice()const {
		return price;
	}

	string GetName()const {
		return name;
	}

	void GetAllCalories() {
		for (size_t i = 0; i < ingredient.GetSize(); i++)
		{
			allCalories += ingredient[i].GetCalories();
		}
	}

	Ingredient* GetProductByID(int id) {
		for (size_t i = 0; i < ingredient.GetSize(); i++)
		{
			if (ingredient[i].GetID() == id) {
				return &ingredient[i];
			}
		}
	}

	void AddProduct(Ingredient& product, const int& productcount) {
		for (size_t i = 0; i < productcount; i++)
		{
			ingredient.Push(product);
		}
	}

	void Show(Meal& meal) {
		meal.ingredient.Show();
	}

	void ShowIngredients() {
		ingredient.Show();
	}

	void ShowMealsName()const {
		cout << "Id : " << id << endl;
		cout << "Food name : " << GetName() << endl;
		cout << "Food price : " << GetPrice() << " AZN" << endl << endl;
	}

	void UpdateProduct() {
		int id;
		cout << "Enter id of product : ";
		cin >> id;
		auto prod = GetProductByID(id);
		cout << "Name      [1]" << endl;
		cout << "Price     [2]" << endl;
		cout << "Calories  [3]" << endl;
		cout << "Count     [4]" << endl;
		int select;
		cout << "Enter select : ";
		cin >> select;

		if (select == 1) {
			cin.ignore();
			cin.clear();
			string newName;
			cout << "Enter new name of product  : ";
			getline(cin, newName);
			prod->SetName(newName);
		}
		else if (select == 2) {
			double newPrice;
			cout << "Enter new price of product : ";
			cin >> newPrice;
			prod->SetPrice(newPrice);
		}
		else if (select == 3) {
			double newCalories;
			cout << "Enter new calories of product : ";
			cin >> newCalories;
		}
		else if (select == 4) {
			int newCount;
			cout << "Enter new count of product : ";
			cin >> newCount;
			prod->SetProductCount(newCount);
		}
		else {
			cout << "incorrect selection!!!" << endl;
			UpdateProduct();
		}
	}
	friend ostream& operator<<(ostream& out, Meal& meal);
};

ostream& operator<<(ostream& out, Meal& meal) {
	out << "ID of meal : " << meal.id << endl << endl;
	out << "Name of Meal : " << meal.name << endl << endl;
	meal.ingredient.Show();
	meal.GetAllCalories();
	out << "Calories of Meal : " << meal.allCalories << endl << endl;
	return out;
}

int Meal::ID = 1;


class Notification {
	int quantity;
	string tableNo;
public:
	Stack<Meal>meals;
	Notification() = default;
	Notification(const int& quantity, const string& tableNo) {
		SetNotificationQuantity(quantity);
		SetTableNo(tableNo);
	}
#pragma region Setters

	void SetNotificationQuantity(const int& quantity) {
		if (quantity > 0) {
			this->quantity = quantity;
		}
	}
	void SetTableNo(const string& tableNo) {
		if (!tableNo.empty()) {
			this->tableNo = tableNo;
		}
	}
#pragma endregion

#pragma region Getters
	int GetQuantity()const noexcept {
		return quantity;
	}
	string GetTableNo()const noexcept {
		return tableNo;
	}
#pragma endregion

	void AddMealToNotification(Meal* meal) {
		meals.Push(*meal);
	}

	friend ostream& operator<<(ostream& out, const Notification& notifications);
};

ostream& operator<<(ostream& out, Notification& notifications) {
	for (size_t i = 0; i < notifications.meals.GetSize(); i++)
	{
		out << notifications.meals[i] << endl;
	}
	out << "Meal count : " << notifications.GetQuantity() << endl;
	out << "Table no : " << notifications.GetTableNo() << endl;

	return out;
}

class Table {
	string message;
	string name;
public:
	static int notificationcount;
	Stack<ClientNotification>clientnotification;
	Stack<Notification>notifications;
	Table() = default;
	Table(const int& notif) {
		SetCount(notificationcount);
	}

#pragma region Setters
	void SetMessage(const string& message) {
		this->message = message;
	}
	void SetCount(const int& notificationcount) {
		this->notificationcount = notificationcount;
	}
	void SetName(const string& name) {
		this->name = name;
	}
#pragma endregion

#pragma region Getters
	string GetMessage() const {
		return message;
	}
	int GetNotificationCount()const {
		return notificationcount;
	}
	string GetName()const {
		return name;
	}
#pragma endregion

	void AddNotification(const Notification& notification) {
		notifications.Push(notification);
	}
};

class Kitchen {
public:
	Stack<Notification>notification;
	Stack<Meal>meals;
	static int notificationCount;
	Kitchen() = default;
	Kitchen(const int& notificationCount, const string& Meal) {
		assert(notificationCount >= 0 && "Notification count is negative number");
		SetNotificationCount(notificationCount);
	}
	void SetNotificationCount(const int& notificationCount) {
		assert(notificationCount >= 0 && "Notification count is negative number");
		this->notificationCount = notificationCount;
	}

	int GetNotificationCount()const {
		return notificationCount;
	}
	void AddMeal(Meal& meal) {
		meals.Push(meal);
	}
	void ShowNameOfMeals() {
		for (size_t i = 0; i < meals.GetSize(); i++)
		{
			cout << meals[i].GetID() << " " << meals[i].GetName() << " - " << meals[i].GetPrice() << " AZN " << endl;
		}
	}

	string G(int inde) {
		for (int index = inde; index < meals.GetSize(); index++)
		{
			return meals[index].GetName();
		}
	}

	void Show()const {
		meals.Show();
	}
	void ShowMealById(int id) {
		for (size_t i = 0; i < meals.GetSize(); i++)
		{
			if (meals[i].GetID() == id) {
				cout << meals[i];
			}
		}
	}
	Meal* GetMealById(int id) {
		for (size_t i = 0; i < meals.GetSize(); i++)
		{
			if (meals[i].GetID() == id) {
				return &meals[i];
			}
		}
	}
	void DeleteMealByID(int index = 0) {
		meals.Pop(index);
	}
	void AddMeal() {
		string namemeal;
		cout << "Enter name of meal : ";
		getline(cin, namemeal);

		double price;
		cout << "Enter price of meal : ";
		cin >> price;

		int count;
		cout << "Enter ingredients count : ";
		cin >> count;
		for (size_t i = 0; i < count; i++)
		{
			cout << "Enter name of ingredient : ";
			string ingname;
			getline(cin, ingname);
			cout << "Enter price of ingredient : ";
			double ingprice;
			cin >> ingprice;
			cout << "Enter calories of ingredient : ";
			double caloriesing;
			cin >> caloriesing;
		}
	}
	int GetMealsCount() {
		return meals.GetSize();
	}

	void UpdateMeal(int id) {
		auto meal = GetMealById(id);
		cout << "Name [1]" << endl;
		cout << "Price [2]" << endl;
		cout << "Irigredients [3]" << endl;
		cout << "Enter your select : ";
		int select;
		cin >> select;
		if (select == 1) {
			cin.ignore();
			cin.clear();
			cout << "Enter new name of meal : ";
			string newname;
			getline(cin, newname);
			meal->SetName(newname);
		}
		else if (select == 2) {
			cout << "Enter new price of meal : ";
			double newprice;
			cin >> newprice;
			meal->SetPrice(newprice);
		}
		else if (select == 3) {
			meal->ShowIngredients();
			meal->UpdateProduct();
		}
	}

	void SearchMeal() {

	}

	//else if (choice == 1) {
	//		continue;
	//	}
	//	else if (choice == 2) {
	//		return;
	//	}
	//	else if (choice == 3) {
	//		cin.ignore();
	//		cin.clear();
	//		system("cls");
	//		char choose = _getch();
	//		cout << "Enter search meal : ";
	//		int cou = 0;
	//		int count = 0;
	//		//for (size_t i = 0; i < k.GetMealsCount(); i++)
	//		//{
	//		//	cout << k.G(cou++) << endl;
	//		//}

	//		//for (size_t i = 0; i < k.GetMealsCount(); i++)
	//		//{
	//		//	for (size_t j = 0; j < k.GetMealsWordCount(count++); j++)
	//		//	{
	//		//		if (_getch() == k.G(cou++)[j]) {
	//		//			cout << k.G(cou) << endl;
	//		//		}
	//		//	}
	//		//}
	//	}
};


class Stock {
public:
	vector<Ingredient>ingredient;
	Stock() = default;
	void ShowAllProduct() {
		int id = 1;
		for (size_t i = 0; i < ingredient.size(); i++)
		{
			cout << "Id : " << id++ << endl;
			cout << ingredient[i] << endl;
		}
	}

	void AddProduct(Ingredient& pro) {
		ingredient.push_back(pro);
	}

	Ingredient* GetProductByID(int index = -1) {
		for (size_t i = 0; i < ingredient.size(); i++)
		{
			if (ingredient[i].GetID() == index) {
				return &ingredient[i];
			}
		}
	}

	bool CheckProductCount(int index, int count) {
		Ingredient* ingredien = GetProductByID(index);
		if (count <= ingredien->GetProductCount()) {
			int temp = ingredien->GetProductCount() - count;
			ingredient[index].SetProductCount(temp);
			return true;
		}
		else {
			cout << "This count very high" << endl;
			cout << "Press any keyy and back to client menu" << endl;
			system("pause");
			return false;
		}
	}

	void ShowAllProducts() {
		cout << "     ALL PRODUCTS" << endl << endl;
		int id = 1;
		for (size_t i = 0; i < ingredient.size(); i++)
		{
			cout << "ID : " << id++ << endl;
			cout << ingredient[i] << endl;
		}
	}

	bool ProductCount(int index, int count) {
		auto product = GetProductByID(index);
		if (count <= product->GetProductCount()) {
			int temp = product->GetProductCount() - count;
			ingredient[index].SetProductCount(temp);
			return true;
		}
		return false;
	}

	int GetIngredientsCount()const {
		return  ingredient.size();
	}

	void DeleteIngredientsByID(int index = -1) {
		if (index == -1) {
			ingredient.pop_back();
		}
		else {
			ingredient.erase(ingredient.begin() + index);
		}
	}

	void ShowProductsToClient() {
		for (size_t i = 0; i < ingredient.size(); i++)
		{
			cout << "ID : " << ingredient[i].GetID() << "\nName of ingredient : " << ingredient[i].GetName() << "\nCalories of ingredient : " << ingredient[i].GetCalories() << endl << endl;
		}
	}

	void UpdateIngredient() {
		ShowAllProducts();
		cout << "Name     [1]" << endl;
		cout << "Price    [2]" << endl;
		cout << "Calories [3]" << endl;
		cout << "Count    [4]" << endl;
		cout << "Which feature you want to update : ";
		int feature;
		cin >> feature;
		if (feature == 1) {
			cout << "Enter number of ingredient : ";
			int num;
			cin >> num;
			Ingredient* p = GetProductByID(num);
			system("cls");
			cout << *p << endl;
			cin.clear();
			cin.ignore();
			string newname;
			cout << "Enter new name of ingredient : ";
			getline(cin, newname);
			p->SetName(newname);
		}
		else if (feature == 2) {
			cout << "Enter number of ingredient : ";
			int num;
			cin >> num;
			Ingredient* p = GetProductByID(num);
			cout << "Enter new price of ingredient : ";
			double newprice;
			cin >> newprice;
			p->SetPrice(newprice);
		}
		else if (feature == 3) {
			cout << "Enter number of ingredient : ";
			int num;
			cin >> num;
			Ingredient* p = GetProductByID(num);
			cout << "Enter new calories of ingredient : ";
			double newcalories;
			cin >> newcalories;
			p->SetCalories(newcalories);
		}
		else if (feature == 4) {
			cout << "Enter number of ingredient : ";
			int num;
			cin >> num;
			Ingredient* p = GetProductByID(num);
			cout << "Enter new quantity of ingredient : ";
			int quantity;
			cin >> quantity;
			p->SetProductCount(quantity);
		}
	}

	void AddProductToStock() {
		cin.clear();
		cin.ignore();
		cout << "Enter name of new ingredient : ";
		string name;
		getline(cin, name);
		cout << "Enter price of new ingredient : ";
		double price;
		cin >> price;
		cout << "Enter calory of new ingredient : ";
		double calory;
		cin >> calory;
		cout << "Enter count of new ingredient : ";
		int count;
		cin >> count;
		Ingredient p(name, price, calory, count);
		ingredient.push_back(p);
	}
};



void SendNotificationToClient(ClientNotification& n, Table& t) {
	t.clientnotification.Push(n);
	t.notificationcount++;
}

void SendNotification(Notification& n1, Kitchen& k) {
	k.notification.Push(n1);
	k.notificationCount++;
}

class FileHelper {
public:
	static string filename;
	static void Save(Stock& stock) {
		ofstream fout(filename, ios::app);
		if (fout.is_open()) {
			int count1 = stock.GetIngredientsCount();
			fout << count1 << endl;
			for (size_t i = 0; i < stock.ingredient.size(); i++)
			{
				fout << "Meal name : " << stock.ingredient[i].GetName() << '\n' << "Meal price : " << stock.ingredient[i].GetPrice() << '\n' << "Meal calories : " << stock.ingredient[i].GetCalories() << '\n' << "Meal product count : " << stock.ingredient[i].GetProductCount() << '\n' << endl;
			}
			fout.close();
		}
	}
	static Stock Read() {
		Stock stock;
		ifstream fin(filename);
		int count1;
		fin >> count1;
		if (fin.is_open()) {
			for (size_t i = 0; i < count1; i++)
			{
				Ingredient p;
				string name;
				double price;
				double calories;
				int count;
				fin >> name;
				fin >> price;
				fin >> calories;
				fin >> count;
				p.SetName(name);
				p.SetPrice(price);
				p.SetCalories(calories);
				p.SetProductCount(count);
				stock.AddProduct(p);
			}
			fin.close();
			return stock;
		}
	}
};
string FileHelper::filename = "products.txt";


class Client {
	Stack<Kitchen>menu;
	Stack<Table>table;
public:
	string tableNo;
	Client() = default;
	Client(const string& tableNo) {
		SetTableNo(tableNo);
	}
	void AddMenu(Kitchen& kitchen) {
		menu.Push(kitchen);
	}
	void SetTableNo(const string& tableNo) {
		if (!tableNo.empty()) {
			this->tableNo = tableNo;
		}
	}

	void ShowMenu() {
		for (size_t i = 0; i < menu.GetSize(); i++)
		{
			menu[i].ShowNameOfMeals();
		}
	}

	string GetTableNo()const {
		return tableNo;
	}

	string GetTable() {
		cout << "Enter table NO : ";
		string tableNo;
		getline(cin, tableNo);
		return tableNo;
	}
};

void GuestPanel(double totaldebt, Client& c, Kitchen& k, Stock& s, Notification& n, Table& t, string& table) {
	while (true)
	{
		system("cls");
		cout << "Menu         [1]" << endl;
		cout << "Search meal  [2]" << endl;
		cout << "Back         [3]" << endl;
		mysetcolor(6, 0);
		cout << "Notification [4]" << "(" << t.notificationcount << ")" << endl;
		mysetcolor(7, 0);
		int choice;
		cout << "Enter select : ";
		cin >> choice;
		if (choice == 1) {
			system("cls");
			int view;
			c.ShowMenu();
			cout << "Enter your choice to view : ";
			cin >> view;

			system("cls");
			int choose;
			cout << "Back     [1]" << endl;
			cout << "Continue [2]" << endl;
			cin >> choose;

			if (choose == 2) {
				system("cls");
				k.ShowMealById(view);
				static int countofmeal;
				cout << "Order            [1]" << endl;
				cout << "Add ingredients  [2]" << endl;
				cin >> countofmeal;
				if (countofmeal == 1) {
					if (countofmeal > 0) {
						auto meal = k.GetMealById(view);

						string content = k.GetMealById(view)->GetName();
						string tableNo = c.GetTableNo();
						totaldebt += countofmeal * meal->GetPrice();
						cout << "You must pay " << totaldebt << " $ " << endl;
						cout << "Continue       [1]" << endl;
						cout << "Finish process [2]" << endl;
						cout << "Enter your choice : ";
						int choice;
						cin >> choice;
						if (choice == 1) {
							Notification n(countofmeal, tableNo);
							n.AddMealToNotification(meal);
							SendNotification(n, k);
						}
						else if (choice == 2) {
							Notification n(countofmeal, tableNo);
							n.AddMealToNotification(meal);
							SendNotification(n, k);
							GuestPanel(totaldebt, c, k, s, n, t, table);
							break;
						}
					}
				}
				else if (countofmeal == 2) {
					system("cls");
					s.ShowProductsToClient();
					int ingcount;
					cout << "Enter number of ingredient : ";
					cin >> ingcount;
					auto product = s.GetProductByID(ingcount);
					cout << *product << endl;
					string productname = product->GetName();
					cout << "Enter " << productname << " count" << endl;
					int procount = 0;
					cin >> procount;
					if (s.CheckProductCount(ingcount, procount)) {
						auto meal = k.GetMealById(view);
						meal->AddProduct(*product, procount);
						cout << *meal << endl;

						system("cls");
						cout << "Product added successfully" << endl;
						cout << "Do you want how much " << meal->GetName() << endl;
						cout << "Enter quantity of meal : ";
						int quantitymeal;
						cin >> quantitymeal;
						if (quantitymeal > 0) {
							string tableNo = c.GetTableNo();
							string content = k.GetMealById(view)->GetName();
							totaldebt += (meal->GetPrice() + (product->GetPrice() * procount)) * quantitymeal;
							cout << "Total cash : " << totaldebt << " $ " << endl;
							Notification n1(quantitymeal, tableNo);
							n1.AddMealToNotification(meal);
							SendNotification(n1, k);
						}
						else {
							cout << "Your select is incorrect" << endl;
						}
					}
					else {
						auto meal = k.GetMealById(view);
						totaldebt += meal->GetPrice();
						cout << "Ingredients out of stock" << endl;
					}
				}
			}
		}
		else if (choice == 2) {
			cout << "Enter meal name : ";
			int a1;
			int num = 0;
			for (size_t i = 0; i < 6; i++)
			{
				char meal = _getch();
				cout << meal;
				int b = k.GetMealsCount();
				for (size_t i3 = 0; i3 < k.GetMealsCount(); i3++)
				{
					Meal meal1 = k.meals[i3];
					cout << endl;
					int i2 = 0;
					while (true)
					{
						char a = meal1.GetName()[i2];
						if (meal1.GetName()[i2] == meal) {
							string a = meal1.GetName();
							cout << "[" << ++num << "] " << a << endl;
						}
						++i2;
						if (meal1.GetName().length() == i2) {
							a1 = i3;
							break;
						}
					}
				}
				if (char(meal) >= 48 && char(meal) <= 57) {
					break;
				}
				else {
				}
			}
		}
		else if (choice == 3) {
			return;
		}
		else if (choice == 4) {
			for (size_t i = 0; i < t.notificationcount; i++)
			{
				t.clientnotification.Show();
			}
			if (t.notificationcount > 0) {
				t.notificationcount--;
			}
			system("pause");
		}
		else {
			continue;
		}
	}
}

void AdminPanel(Kitchen& k, Stock& s, Client& c, Notification& n, Table& t) {
	system("cls");
	cout << "KITCHEN [1]" << endl;
	cout << "STOCK   [2]" << endl;
	cout << "BACK    [3]" << endl;
	cout << "Enter select : ";
	int adminselect = 0;
	cin >> adminselect;
	if (adminselect == 1) {
		system("cls");
		cout << "\t\t\t\t===KITCHEN===" << endl;
		k.ShowNameOfMeals();
		cout << endl;
		cout << "Delete meal [1]" << endl;
		cout << "Update meal [2]" << endl;
		cout << "Add meal    [3]" << endl;
		mysetcolor(6, 0);
		cout << "Notifications [4]" << "(" << k.notificationCount << ")" << endl << endl;
		mysetcolor(7, 0);
		cout << "Back        [5]" << endl;
		int select;
		cout << "Enter your select : ";
		cin >> select;
		if (select == 1) {
			while (true)
			{
				cout << "Enter ID of meal for deletion : ";
				int ID;
				cin >> ID;
				if (ID <= k.GetMealsCount()) {
					--ID;
					auto mealtodelete = k.GetMealById(ID);
					k.DeleteMealByID(ID);
					system("cls");
					k.ShowNameOfMeals();
					AdminPanel(k, s, c, n, t);
				}
				else {
					cout << "This meal there is not found in our kitchen" << endl;
				}
			}
		}
		else if (select == 2) {
			while (true)
			{
				cout << "Enter ID of meal for updation : ";
				int ID;
				cin >> ID;
				k.UpdateMeal(ID);
				cout << "Meal updated successfully" << endl;
				system("pause");
				AdminPanel(k, s, c, n, t);
			}
		}
		else if (select == 3) {
			k.ShowNameOfMeals();
			k.AddMeal();
			k.ShowNameOfMeals();
			AdminPanel(k, s, c, n, t);
		}
		else if (select == 4) {
			/*if (k.notificationCount > 1) {
				k.notificationCount--;*/
			for (size_t i = 0; i < k.notificationCount; i++)
			{
				k.notification.Show();
			}
			//}
			k.notificationCount--;
			cout << "Reject [1]\nAccept [2]" << endl;
			cout << "Enter your answer : ";
			int answer;
			cin >> answer;
			int count;
			Notification n1;
			if (answer == 1) {
				string tableNo = c.GetTableNo();
				int count;
				static string content = "We can't preparing your order. Because we are very busy now";
				ClientNotification n(content, tableNo);
				SendNotificationToClient(n, t);
				AdminPanel(k, s, c, n1, t);
			}
			else if (answer == 2) {
				string tableNo = c.GetTableNo();
				static string content = "We preparing your order. Please wait 10 minutes";
				ClientNotification n(content, tableNo);
				SendNotificationToClient(n, t);
				AdminPanel(k, s, c, n1, t);
			}
		}
		else if (select == 5) {
			AdminPanel(k, s, c, n, t);
		}
	}
	else if (adminselect == 2) {
		system("cls");
		cout << "=====STOCK=====" << endl;
		s.ShowAllProducts();
		cout << "Delete ingredients  [1]" << endl;
		cout << "Add ingredients     [2]" << endl;
		cout << "Update ingredients  [3]" << endl;
		cout << "Back                [4]" << endl;
		while (true)
		{
			cout << "Enter your select : ";
			int select;
			cin >> select;
			if (select == 1) {
				cout << "Enter number of ingredient : ";
				int number;
				cin >> number;
				--number;
				if (number <= s.GetIngredientsCount()) {
					s.DeleteIngredientsByID(number);
					system("cls");
					s.ShowAllProducts();
					system("pause");
					AdminPanel(k, s, c, n, t);
				}
			}
			else if (select == 2) {
				system("cls");
				s.ShowAllProducts();
				s.AddProductToStock();
				s.ShowAllProducts();
				system("cls");
				system("pause");
				AdminPanel(k, s, c, n, t);
			}
			else if (select == 3) {
				s.ShowAllProducts();
				system("cls");
				s.UpdateIngredient();
				s.ShowAllProducts();
				system("pause");
				AdminPanel(k, s, c, n, t);
			}
			else if (select == 4) {
				return;
			}
		}
	}
	else if (adminselect == 3) {
		return;
	}
}

int Kitchen::notificationCount = 0;

int Table::notificationcount = 0;

int main() {
	Ingredient p("Tomato", 0.2, 18, 100);
	Ingredient p1("Olive", 0.1, 115, 1000);
	Ingredient p2("Mashroom", 0.8, 22, 1000);
	Ingredient p3("Flour", 1, 364, 100);
	Ingredient p4("Chicken", 2, 239, 200);
	Ingredient p5("Mayonnaise", 2.5, 679.7, 150);
	Ingredient p6("Beans", 1, 347, 200);
	Ingredient p7("Cucumber", 0.7, 30, 120);
	Ingredient p8("Cucumber", 1, 10.7, 130);
	Ingredient p9("Carrot", 1, 41, 140);
	Ingredient p10("Potato", 1, 76.7, 150);
	Stock s1;
	s1.AddProduct(p);
	s1.AddProduct(p1);
	s1.AddProduct(p2);
	s1.AddProduct(p3);
	s1.AddProduct(p4);
	s1.AddProduct(p5);
	s1.AddProduct(p6);
	s1.AddProduct(p7);
	s1.AddProduct(p8);
	s1.AddProduct(p9);
	s1.AddProduct(p10);
	Meal f(20, "Margarita");
	f.AddProduct(p, 2);
	f.AddProduct(p1, 1);
	f.AddProduct(p2, 3);
	f.AddProduct(p3, 1);
	Meal f1(25, "Sezar");
	f1.AddProduct(p, 1);
	f1.AddProduct(p1, 2);
	f1.AddProduct(p3, 2);
	f1.AddProduct(p4, 3);
	Meal f2(40, "Capital");
	f2.AddProduct(p4, 4);
	f2.AddProduct(p5, 3);
	f2.AddProduct(p6, 2);
	f2.AddProduct(p7, 1);
	f2.AddProduct(p8, 3);
	f2.AddProduct(p9, 2);
	f2.AddProduct(p10, 1);
	Kitchen k;
	k.AddMeal(f);
	k.AddMeal(f1);
	k.AddMeal(f2);
	Client c;
	c.AddMenu(k);

	//FileHelper::Save(s1);
	Stock stock = FileHelper::Read();

	Meal m;

	Table t;

	Notification n;

	while (true)
	{
		system("cls");
		restaranTName();
		cout << endl;
		cout << endl;

		cout << "                                                         Client  [0]" << endl;
		cout << "                                                         Admin   [1]" << endl;
		cout << "                                                         Exit    [2]" << endl;
		int choose = -1;
		cout << "                                                         Enter choice : ";
		cin >> choose;
		double totalDebt = 0;
		if (choose == 0) {
			system("cls");
			string table;
			cout << "Enter table no : ";
			cin >> table;
			GuestPanel(totalDebt, c, k, stock, n, t, table);
		}
		else if (choose == 1) {
			while (true)
			{
				system("cls");
				cin.ignore();
				cin.clear();
				string username;
				cout << "Enter username : ";
				getline(cin, username);

				if (username == "eat_123") {
					string password;
					cout << "Enter password : ";
					getline(cin, password);
					if (password == "123_go") {
						system("cls");
						cout << "Continue [1]" << endl;
						cout << "Back     [2]" << endl;
						int choice;
						cout << "Enter select : ";
						cin >> choice;
						if (choice == 1) {
							AdminPanel(k, stock, c, n, t);
							break;
						}
						else {
							break;
						}
					}
					else {
						system("cls");
						cout << "Wrong password!!!" << endl;
						cout << "Back     [1]" << endl;
						cout << "Continue [2]" << endl;
						int select;
						cout << "Enter select : ";
						cin >> select;
						if (select == 1) {
							break;
						}
						else if (select == 2) {
							continue;
						}
					}
				}
				else {
					system("cls");
					cout << "Wrong username!!!" << endl;
					cout << "Back     [1]" << endl;
					cout << "Continue [2]" << endl;
					int select;
					cout << "Enter select : ";
					cin >> select;
					if (select == 1) {
						break;
					}
					else if (select == 2) {
						continue;
					}
				}
			}
		}
		else if (choose == 2) {
			system("cls");
			cout << endl;
			GoodBye();
			break;
		}
		else {
			continue;
		}
	}
}