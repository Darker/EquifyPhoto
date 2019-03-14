#pragma once

#include <QtWidgets/QMainWindow>

namespace Ui {
	class EquifyPhotoClass;
}
class EquifyPhoto : public QMainWindow
{
	Q_OBJECT

public:
	EquifyPhoto(QWidget *parent = Q_NULLPTR);


	virtual ~EquifyPhoto();
public Q_SLOTS:
	void askForFiles();
	void menuAction(QAction* a);

	
private:
	Ui::EquifyPhotoClass* ui;
};
