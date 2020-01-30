/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionnew;
    QAction *actionopen;
    QAction *actionsave;
    QAction *actionsaveas;
    QAction *actioncopy;
    QAction *actionpaste;
    QAction *actioncut;
    QAction *actionabout_notepad;
    QAction *actionundo;
    QAction *actionredo;
    QAction *actioncolor;
    QAction *actionfont;
    QAction *actionback_ground_color;
    QAction *actionnotepad_background_color;
    QAction *actionprint;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(548, 363);
        MainWindow->setTabShape(QTabWidget::Rounded);
        actionnew = new QAction(MainWindow);
        actionnew->setObjectName(QString::fromUtf8("actionnew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/Hopstarter-Soft-Scraps-File-New.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionnew->setIcon(icon);
        actionopen = new QAction(MainWindow);
        actionopen->setObjectName(QString::fromUtf8("actionopen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/Custom-Icon-Design-Flatastic-4-Open.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionopen->setIcon(icon1);
        actionsave = new QAction(MainWindow);
        actionsave->setObjectName(QString::fromUtf8("actionsave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/Saki-NuoveXT-Actions-save-all.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionsave->setIcon(icon2);
        actionsaveas = new QAction(MainWindow);
        actionsaveas->setObjectName(QString::fromUtf8("actionsaveas"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/Avosoft-Warm-Toolbar-Folder-open.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionsaveas->setIcon(icon3);
        actioncopy = new QAction(MainWindow);
        actioncopy->setObjectName(QString::fromUtf8("actioncopy"));
        actioncopy->setIcon(icon3);
        actionpaste = new QAction(MainWindow);
        actionpaste->setObjectName(QString::fromUtf8("actionpaste"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/book.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionpaste->setIcon(icon4);
        actioncut = new QAction(MainWindow);
        actioncut->setObjectName(QString::fromUtf8("actioncut"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/Custom-Icon-Design-Flatastic-1-Cut.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actioncut->setIcon(icon5);
        actionabout_notepad = new QAction(MainWindow);
        actionabout_notepad->setObjectName(QString::fromUtf8("actionabout_notepad"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/icons/Oxygen-Icons.org-Oxygen-Actions-help-about.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionabout_notepad->setIcon(icon6);
        actionundo = new QAction(MainWindow);
        actionundo->setObjectName(QString::fromUtf8("actionundo"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/icons/Custom-Icon-Design-Flatastic-10-Open-file.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionundo->setIcon(icon7);
        actionredo = new QAction(MainWindow);
        actionredo->setObjectName(QString::fromUtf8("actionredo"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/icons/Hopstarter-Soft-Scraps-Folder-Open.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionredo->setIcon(icon8);
        actioncolor = new QAction(MainWindow);
        actioncolor->setObjectName(QString::fromUtf8("actioncolor"));
        actionfont = new QAction(MainWindow);
        actionfont->setObjectName(QString::fromUtf8("actionfont"));
        actionback_ground_color = new QAction(MainWindow);
        actionback_ground_color->setObjectName(QString::fromUtf8("actionback_ground_color"));
        actionnotepad_background_color = new QAction(MainWindow);
        actionnotepad_background_color->setObjectName(QString::fromUtf8("actionnotepad_background_color"));
        actionprint = new QAction(MainWindow);
        actionprint->setObjectName(QString::fromUtf8("actionprint"));
        actionprint->setIcon(icon3);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QFont font;
        font.setPointSize(12);
        font.setItalic(true);
        tabWidget->setFont(font);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout_2 = new QHBoxLayout(tab);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        horizontalLayout_3 = new QHBoxLayout(tab_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        horizontalLayout_3->addWidget(textEdit);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 548, 24));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionnew);
        menuFile->addAction(actionopen);
        menuFile->addSeparator();
        menuFile->addAction(actionsave);
        menuFile->addAction(actionsaveas);
        menuEdit->addAction(actioncopy);
        menuEdit->addAction(actionpaste);
        menuEdit->addAction(actioncut);
        menuEdit->addSeparator();
        menuEdit->addAction(actionundo);
        menuEdit->addAction(actionredo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionfont);
        menuEdit->addAction(actioncolor);
        menuEdit->addAction(actionback_ground_color);
        menuEdit->addAction(actionnotepad_background_color);
        menuEdit->addAction(actionprint);
        menuAbout->addAction(actionabout_notepad);
        mainToolBar->addAction(actionnew);
        mainToolBar->addAction(actionopen);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionsave);
        mainToolBar->addAction(actionsaveas);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actioncopy);
        mainToolBar->addAction(actionpaste);
        mainToolBar->addAction(actioncut);
        mainToolBar->addAction(actionundo);
        mainToolBar->addAction(actionredo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionabout_notepad);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionnew->setText(QCoreApplication::translate("MainWindow", "new", nullptr));
        actionopen->setText(QCoreApplication::translate("MainWindow", "open", nullptr));
        actionsave->setText(QCoreApplication::translate("MainWindow", "save", nullptr));
        actionsaveas->setText(QCoreApplication::translate("MainWindow", "save as", nullptr));
        actioncopy->setText(QCoreApplication::translate("MainWindow", "copy", nullptr));
        actionpaste->setText(QCoreApplication::translate("MainWindow", "paste", nullptr));
        actioncut->setText(QCoreApplication::translate("MainWindow", "cut", nullptr));
        actionabout_notepad->setText(QCoreApplication::translate("MainWindow", "about notepad", nullptr));
        actionundo->setText(QCoreApplication::translate("MainWindow", "undo", nullptr));
        actionredo->setText(QCoreApplication::translate("MainWindow", "redo", nullptr));
        actioncolor->setText(QCoreApplication::translate("MainWindow", "color", nullptr));
        actionfont->setText(QCoreApplication::translate("MainWindow", "font", nullptr));
        actionback_ground_color->setText(QCoreApplication::translate("MainWindow", "back ground color", nullptr));
        actionnotepad_background_color->setText(QCoreApplication::translate("MainWindow", "notepad background color", nullptr));
        actionprint->setText(QCoreApplication::translate("MainWindow", "print", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "                                                   this is the default page", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
