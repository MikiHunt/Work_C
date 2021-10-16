void update_book()
{
	system("cls");
	fstream file, file1;
	int no_copy, no_co, count = 0;
	string b_name, b_na, a_name,b_status;
	string a_na, b_idd, b_id,b_st;

	cout << "\n\n\t\t\t\tUpdate Book Record";
	file1.open("book1.txt",
		ios::app | ios::out);
	file.open("book.txt", ios::in);

	if (!file)
		cout << "\n\nFile Opening Error!";
	else {

		cout << "\n\nBook ID : ";
		cin >> b_id;
		file >> b_idd >> b_name;
		file >> a_name >> no_copy;
    	file >> b_status;

		// Till end of file is reached
		while (!file.eof()) {
			if (b_id == b_idd) {
				system("cls");
				cout << "\t\t\t\t"
					 << "Update Book Record";
				cout << "\n\nNew Book Name : ";
				cin >> b_na;
				cout << "\nAuthor Name : ";
				cin >> a_na;
				cout << "\nNo. of Books : ";
				cin >> no_co;
				cout << "\nBook Status : ";
				cin >> b_st;
				file1 << " " << b_id << " "
					<< b_na << " "
					<< a_na << " " << no_co
          			<< " " << b_st
					<< "\n\n";
				count++;
			}
			else
				file1 << " " << b_idd
					<< " " << b_name
					<< " " << a_name
					<< " " << no_copy
          			<< " " << b_status
					<< "\n\n";
			file >> b_idd >> b_name;
			file >> a_name >> no_copy;
      		file >> b_status;
		}
		if (count == 0)
			cout << "\n\nBook ID"
				<< " Not Found...";
	}
	cout << endl;
	system("pause");

	// Close the files
	file.close();
	file1.close();
	remove("book.txt");
	rename("book1.txt",
		   "book.txt");
}