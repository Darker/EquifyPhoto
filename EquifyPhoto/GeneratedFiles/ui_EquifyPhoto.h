/********************************************************************************
** Form generated from reading UI file 'EquifyPhoto.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUIFYPHOTO_H
#define UI_EQUIFYPHOTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EquifyPhotoClass
{
public:
    QAction *actionAdd_files;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *labelPreviewImageLeft;
    QLabel *labelPreviewImageRight;
    QMenuBar *menuBar;
    QMenu *menuStart;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *EquifyPhotoClass)
    {
        if (EquifyPhotoClass->objectName().isEmpty())
            EquifyPhotoClass->setObjectName(QString::fromUtf8("EquifyPhotoClass"));
        EquifyPhotoClass->resize(600, 400);
        actionAdd_files = new QAction(EquifyPhotoClass);
        actionAdd_files->setObjectName(QString::fromUtf8("actionAdd_files"));
        centralWidget = new QWidget(EquifyPhotoClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelPreviewImageLeft = new QLabel(centralWidget);
        labelPreviewImageLeft->setObjectName(QString::fromUtf8("labelPreviewImageLeft"));

        horizontalLayout->addWidget(labelPreviewImageLeft);

        labelPreviewImageRight = new QLabel(centralWidget);
        labelPreviewImageRight->setObjectName(QString::fromUtf8("labelPreviewImageRight"));

        horizontalLayout->addWidget(labelPreviewImageRight);


        verticalLayout_2->addLayout(horizontalLayout);

        EquifyPhotoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(EquifyPhotoClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menuStart = new QMenu(menuBar);
        menuStart->setObjectName(QString::fromUtf8("menuStart"));
        EquifyPhotoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(EquifyPhotoClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        EquifyPhotoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(EquifyPhotoClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        EquifyPhotoClass->setStatusBar(statusBar);

        menuBar->addAction(menuStart->menuAction());
        menuStart->addAction(actionAdd_files);

        retranslateUi(EquifyPhotoClass);
        QObject::connect(menuBar, SIGNAL(triggered(QAction*)), EquifyPhotoClass, SLOT(menuAction(QAction*)));

        QMetaObject::connectSlotsByName(EquifyPhotoClass);
    } // setupUi

    void retranslateUi(QMainWindow *EquifyPhotoClass)
    {
        EquifyPhotoClass->setWindowTitle(QCoreApplication::translate("EquifyPhotoClass", "EquifyPhoto", nullptr));
        actionAdd_files->setText(QCoreApplication::translate("EquifyPhotoClass", "Add &files", nullptr));
        labelPreviewImageLeft->setText(QCoreApplication::translate("EquifyPhotoClass", "TextLabel", nullptr));
        labelPreviewImageRight->setText(QCoreApplication::translate("EquifyPhotoClass", "preview", nullptr));
        menuStart->setTitle(QCoreApplication::translate("EquifyPhotoClass", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EquifyPhotoClass: public Ui_EquifyPhotoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUIFYPHOTO_H
