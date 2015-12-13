// Fill out your copyright notice in the Description page of Project Settings.

#include "Test2D.h"
#include "HayabusaDatabase.h"

HayabusaDatabase::HayabusaDatabase()
{
#include <iostream>
#include <pqxx/pqxx> 

	using namespace std;
	using namespace pqxx;

	int main(int argc, char* argv[])
	{
		try{
			connection C("dbname=testdb user=postgres password=cohondob \
						       hostaddr=127.0.0.1 port=5432");
			if (C.is_open()) {
				cout << "Opened database successfully: " << C.dbname() << endl;
			}
			else {
				cout << "Can't open database" << endl;
				return 1;
			}
			C.disconnect();
		}
		catch (const std::exception &e){
			cerr << e.what() << std::endl;
			return 1;
		}
	}
}

HayabusaDatabase::~HayabusaDatabase()
{
#include <iostream>
#include <pqxx/pqxx> 

	using namespace std;
	using namespace pqxx;

	int main(int argc, char* argv[])
	{
		char * sql;

		try{
			connection C("dbname=testdb user=postgres password=cohondob \
						       hostaddr=127.0.0.1 port=5432");
			if (C.is_open()) {
				cout << "Opened database successfully: " << C.dbname() << endl;
			}
			else {
				cout << "Can't open database" << endl;
				return 1;
			}
			/* Create SQL statement */
			sql = "CREATE TABLE SCORES("  \
				"ID INT PRIMARY KEY     NOT NULL," \
				"NAME           TEXT    NOT NULL," \
				"sCORE            INT     NOT NULL," \
			/* Create a transactional object. */
			work W(C);

			/* Execute SQL query */
			W.exec(sql);
			W.commit();
			cout << "Table created successfully" << endl;
			C.disconnect();
		}
		catch (const std::exception &e){
			cerr << e.what() << std::endl;
			return 1;
		}

		return 0;
	}
}
