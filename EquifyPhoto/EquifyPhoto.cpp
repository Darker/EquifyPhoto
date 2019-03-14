#include "EquifyPhoto.h"
#include "ui_EquifyPhoto.h"
#include <QFileDialog>
EquifyPhoto::EquifyPhoto(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::EquifyPhotoClass())
{
	ui->setupUi(this);
	ui->labelPreviewImageLeft->setBackgroundRole(QPalette::Base);
	ui->labelPreviewImageLeft->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
	ui->labelPreviewImageLeft->setScaledContents(true);
}

void EquifyPhoto::menuAction(QAction * action)
{
	if (action != nullptr) {
		if (action->objectName() == "actionAdd_files") {
			askForFiles();
		}
	}
}
void EquifyPhoto::askForFiles() {
	const QString filter = "Images (*.jpg)";
	//QFileDialog d;
	//d.setFileMode(QFileDialog::ExistingFiles);
	//d.setAcceptDrops
	//const QStringList files = QFileDialog::getOpenFileNames(nullptr, "Select images", "", filter);
	const QStringList files = { "C:\\3D\\reconstruction\\kaplicka-karlin\\img\\3\\DSC_8012.JPG" };

	for (QString file : files) {
		QPixmap img(file);
		//label->setPixmap(img);
		const QSize size = img.size();
		ui->labelPreviewImageLeft->setPixmap(img.scaledToWidth(400));
		ui->labelPreviewImageLeft->setText(file);
	}

}
EquifyPhoto::~EquifyPhoto()
{
	delete ui;
}
