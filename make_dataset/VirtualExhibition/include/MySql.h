#pragma once
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
class MySql {
public :
	static MySql& getInstance() {
		static MySql instance;
		return instance;
	}
	MySql(MySql const&) = delete;
	void operator = (MySql const&) = delete;
	bool execSql(QString &sql);
	bool execSql(QSqlQuery &sql);
private:
	MySql();
private:
	QSqlDatabase database;
};