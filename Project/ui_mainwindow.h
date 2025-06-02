/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QGroupBox *groupBox_7;
    QLabel *label_22;
    QLabel *label_23;
    QLineEdit *le_id_entreprise;
    QLabel *label_24;
    QLineEdit *le_nom;
    QPushButton *pb_changer_e;
    QPushButton *pb_ajoute_e;
    QComboBox *le_ville;
    QTableView *tab_entreprise;
    QGroupBox *groupBox_10;
    QPushButton *pb_trier_e;
    QPushButton *pb_afficher_e;
    QGroupBox *groupBox_11;
    QLabel *label_25;
    QLineEdit *le_id_e_supp;
    QPushButton *pb_supprimer_e;
    QLineEdit *le_id_e_recherche;
    QPushButton *pb_rechercher_e;
    QLabel *label_26;
    QWidget *tab_3;
    QTableView *tab_fournisseur;
    QGroupBox *groupBox_6;
    QLabel *label_9;
    QLabel *label_15;
    QLineEdit *le_id_2;
    QLabel *label_18;
    QLabel *label_19;
    QLineEdit *le_telephone;
    QPushButton *pb_changer_f;
    QPushButton *pb_ajoute_f;
    QLineEdit *le_facture;
    QLabel *label_17;
    QLineEdit *le_nom_prenom;
    QComboBox *le_entreprise;
    QGroupBox *groupBox_8;
    QLabel *label_20;
    QLineEdit *le_id_supp_f;
    QPushButton *pb_supprimer_f;
    QGroupBox *groupBox_9;
    QPushButton *pb_imprime_pdf;
    QPushButton *pb_pfd_f;
    QPushButton *pb_afficher_f;
    QGraphicsView *logo;
    QWidget *tab_4;
    QGroupBox *groupBox_4;
    QLabel *label_13;
    QLineEdit *le_id_supp;
    QPushButton *pb_supprimer;
    QLineEdit *le_id_r;
    QPushButton *pb_rechercher;
    QGroupBox *groupBox_3;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *le_id;
    QPushButton *pb_ajouter;
    QLabel *label_10;
    QSpinBox *le_nombre;
    QPushButton *pb_changer;
    QLabel *label_11;
    QLabel *label_12;
    QComboBox *le_type;
    QSpinBox *le_prix;
    QComboBox *le_etat;
    QTableView *tab_equipement;
    QGroupBox *groupBox_5;
    QPushButton *pb_pfd;
    QPushButton *pb_trier;
    QPushButton *pb_charger;
    QGroupBox *groupBox;
    QComboBox *comboBoxfiltre;
    QLineEdit *le_filtre;
    QLabel *label_16;
    QLabel *label_21;
    QLabel *label_14;
    QWidget *tab;
    QFrame *statv;
    QHBoxLayout *horizontalLayout_3;
    QWidget *tab_5;
    QPushButton *pb_todolist;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(914, 554);
        MainWindow->setStyleSheet(QLatin1String("QMenu\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"/*-----QWidget-----*/\n"
"QWidget\n"
"{\n"
"	\n"
"	background-color: rgb(213, 213, 213);\n"
"	\n"
"	color:rgb(0, 85, 127);\n"
"\n"
"	selection-color: rgb(170, 0, 0);\n"
"}\n"
"\n"
"QToolBar\n"
"{\n"
"	\n"
"	background-color: rgb(80, 212, 184);\n"
"}\n"
"\n"
"QTabWidget\n"
"{\n"
"\n"
"	\n"
"	border-color: rgb(208, 223, 213);\n"
"\n"
"	color: #c2c7d5;\n"
"	font-size: 15px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"/*-----QLabel-----*/\n"
"QLabel\n"
"{\n"
"	background-color: transparent;\n"
"	color: #c2c7d5;\n"
"	font-size: 13px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QPushButton-----*/\n"
"QPushButton\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 172, 149, 255),stop:0.995192 rgba(54, 197, 177, 255));\n"
"	color: #fff;\n"
"	font-size: 11px;\n"
"	font-weight: bold;\n"
"	border: none;\n"
"	border-radius: 3px;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::pressed\n"
""
                        "{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 207, 179, 255),stop:1 rgba(70, 255, 230, 255));\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"/*-----QCheckBox-----*/\n"
"\n"
"\n"
"/*-----QLineEdit-----*/\n"
"QLineEdit\n"
"{\n"
"	background-color: #c2c7d5;\n"
"	color: rgb(0, 0, 0);\n"
"	font-weight: bold;\n"
"	border: none;\n"
"	border-radius: 2px;\n"
"	padding: 3px;\n"
"\n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"	background-color: #c2c7d5;\n"
"	color: rgb(0, 0, 0);\n"
"	font-weight: bold;\n"
"	border: none;\n"
"	border-radius: 2px;\n"
"	padding: 3px;\n"
"\n"
"}\n"
"QSpinBox\n"
"{\n"
"	background-color: #c2c7d5;\n"
"\n"
"	color: rgb(0, 0, 0);\n"
"	font-weight: bold;\n"
"	border: 1px solid #191919;\n"
"	border-radius: 2px;\n"
"	padding: 3px;\n"
"\n"
"}\n"
"\n"
"/*-----QListView-----*/\n"
"QListView\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(50, 61, 80, 255),stop:1 rgba(44, 49, 69, 255));\n"
"	color: #fff;\n"
"	font-size: 12px;\n"
"	fo"
                        "nt-weight: bold;\n"
"	border: 1px solid #191919;\n"
"	show-decoration-selected: 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QListView::item\n"
"{\n"
"	color: #31cecb;\n"
"	background-color: #454e5e;\n"
"	border: none;\n"
"	padding: 5px;\n"
"	border-radius: 0px;\n"
"	padding-left : 10px;\n"
"	height: 42px;\n"
"\n"
"}\n"
"\n"
"QListView::item:selected\n"
"{\n"
"	color: #31cecb;\n"
"	background-color: #454e5e;\n"
"\n"
"}\n"
"\n"
"\n"
"QListView::item:!selected\n"
"{\n"
"	color:white;\n"
"	background-color: transparent;\n"
"	border: none;\n"
"	padding-left : 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"QListView::item:!selected:hover\n"
"{\n"
"	color: #bbbcba;\n"
"	background-color: #454e5e;\n"
"	border: none;\n"
"	padding-left : 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QTreeView-----*/\n"
"QTreeView \n"
"{\n"
"	background-color: #232939;\n"
"	show-decoration-selected: 0;\n"
"	color: #c2c8d7;\n"
"\n"
"}\n"
"\n"
"\n"
"QTreeView::item \n"
"{\n"
"	border-top-color: transparent;\n"
"	border-bottom-color: transparent;\n"
"\n"
"}\n"
"\n"
"\n"
"QTreeVie"
                        "w::item:hover \n"
"{\n"
"	background-color: #606060;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QTreeView::item:selected \n"
"{\n"
"	background-color: #0ab19a;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QTreeView::item:selected:active\n"
"{\n"
"	background-color: #0ab19a;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QTreeView::branch:has-children:!has-siblings:closed,\n"
"QTreeView::branch:closed:has-children:has-siblings \n"
"{\n"
"	image: url(://tree-closed.png);\n"
"\n"
"}\n"
"\n"
"QTreeView::branch:open:has-children:!has-siblings,\n"
"QTreeView::branch:open:has-children:has-siblings  \n"
"{\n"
"	image: url(://tree-open.png);\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QTableView & QTableWidget-----*/\n"
"QTableView\n"
"{\n"
"	background-color: rgb(217, 217, 217);\n"
"	border: 4px solid gray;\n"
"\n"
"	color: rgb(0, 0, 0);\n"
"\n"
"	gridline-color: rgb(0, 0, 0);\n"
"    outline : 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::disabled\n"
"{\n"
"    background-color: #242526;\n"
"    border: 1px solid #32414B;\n"
"    color: #65"
                        "6565;\n"
"    gridline-color: #656565;\n"
"    outline : 0;\n"
"\n"
"}\n"
"\n"
"QGroupBox\n"
"{	\n"
"	\n"
"	background-color: rgb(24, 75, 94);\n"
"\n"
"}\n"
"\n"
"QTableView::item:hover \n"
"{\n"
"    background-color: #606060;\n"
"    color: #f0f0f0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::item:selected \n"
"{\n"
"	background-color: #0ab19a;\n"
"    color: #F0F0F0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::item:selected:disabled\n"
"{\n"
"    background-color: #acb3b9;\n"
"    border: 2px solid #525251;\n"
"    color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableCornerButton::section\n"
"{\n"
"\n"
"	background-color: rgb(154, 166, 166);\n"
"    color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section\n"
"{\n"
"	color: #fff;\n"
"	border-top: 0px;\n"
"	border-bottom: 1px solid gray;\n"
"	border-right: 1px solid gray;\n"
"	background-color: #343a49;\n"
"    margin-top:1px;\n"
"	margin-bottom:1px;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:disabled\n"
"{\n"
"    background-color: #525251;\n"
"    color"
                        ": #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:checked\n"
"{\n"
"    color: #fff;\n"
"    background-color: #0ab19a;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:checked:disabled\n"
"{\n"
"    color: #656565;\n"
"    background-color: #525251;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::vertical::first,\n"
"QHeaderView::section::vertical::only-one\n"
"{\n"
"    border-top: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::vertical\n"
"{\n"
"    border-top: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::horizontal::first,\n"
"QHeaderView::section::horizontal::only-one\n"
"{\n"
"    border-left: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::horizontal\n"
"{\n"
"    border-left: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QScrollBar-----*/\n"
"QScrollBar:horizontal \n"
"{\n"
"    background-color: transparent;\n"
"    height: 8px;\n"
"    margin: 0px;\n"
"    padding: 0px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::handle:horizontal \n"
"{\n"
""
                        "    border: none;\n"
"	min-width: 100px;\n"
"    background-color: #56576c;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-line:horizontal, \n"
"QScrollBar::sub-line:horizontal,\n"
"QScrollBar::add-page:horizontal, \n"
"QScrollBar::sub-page:horizontal \n"
"{\n"
"    width: 0px;\n"
"    background-color: transparent;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar:vertical \n"
"{\n"
"    background-color: transparent;\n"
"    width: 8px;\n"
"    margin: 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::handle:vertical \n"
"{\n"
"    border: none;\n"
"	min-height: 100px;\n"
"    background-color: #56576c;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-line:vertical, \n"
"QScrollBar::sub-line:vertical,\n"
"QScrollBar::add-page:vertical, \n"
"QScrollBar::sub-page:vertical \n"
"{\n"
"    height: 0px;\n"
"    background-color: transparent;\n"
"\n"
"}\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(-30, 0, 1091, 501));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tabWidget->setTabBarAutoHide(false);
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_7 = new QGroupBox(tab_2);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 10, 271, 261));
        label_22 = new QLabel(groupBox_7);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(10, 40, 71, 16));
        label_23 = new QLabel(groupBox_7);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(10, 120, 61, 16));
        le_id_entreprise = new QLineEdit(groupBox_7);
        le_id_entreprise->setObjectName(QStringLiteral("le_id_entreprise"));
        le_id_entreprise->setGeometry(QRect(140, 40, 113, 20));
        label_24 = new QLabel(groupBox_7);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(10, 80, 71, 16));
        le_nom = new QLineEdit(groupBox_7);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(140, 80, 113, 20));
        pb_changer_e = new QPushButton(groupBox_7);
        pb_changer_e->setObjectName(QStringLiteral("pb_changer_e"));
        pb_changer_e->setGeometry(QRect(140, 210, 116, 24));
        pb_ajoute_e = new QPushButton(groupBox_7);
        pb_ajoute_e->setObjectName(QStringLiteral("pb_ajoute_e"));
        pb_ajoute_e->setGeometry(QRect(10, 210, 117, 24));
        le_ville = new QComboBox(groupBox_7);
        le_ville->setObjectName(QStringLiteral("le_ville"));
        le_ville->setGeometry(QRect(140, 120, 111, 22));
        tab_entreprise = new QTableView(tab_2);
        tab_entreprise->setObjectName(QStringLiteral("tab_entreprise"));
        tab_entreprise->setGeometry(QRect(290, 10, 591, 261));
        tab_entreprise->setStyleSheet(QLatin1String("gridline-color: rgb(170, 255, 255);\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));
        groupBox_10 = new QGroupBox(tab_2);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(10, 270, 121, 141));
        pb_trier_e = new QPushButton(groupBox_10);
        pb_trier_e->setObjectName(QStringLiteral("pb_trier_e"));
        pb_trier_e->setGeometry(QRect(10, 10, 89, 24));
        pb_afficher_e = new QPushButton(groupBox_10);
        pb_afficher_e->setObjectName(QStringLiteral("pb_afficher_e"));
        pb_afficher_e->setGeometry(QRect(10, 100, 91, 24));
        groupBox_11 = new QGroupBox(tab_2);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(510, 280, 371, 111));
        label_25 = new QLabel(groupBox_11);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(10, 60, 105, 24));
        label_25->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Arial\";"));
        le_id_e_supp = new QLineEdit(groupBox_11);
        le_id_e_supp->setObjectName(QStringLiteral("le_id_e_supp"));
        le_id_e_supp->setGeometry(QRect(120, 60, 111, 22));
        pb_supprimer_e = new QPushButton(groupBox_11);
        pb_supprimer_e->setObjectName(QStringLiteral("pb_supprimer_e"));
        pb_supprimer_e->setGeometry(QRect(240, 60, 111, 24));
        le_id_e_recherche = new QLineEdit(groupBox_11);
        le_id_e_recherche->setObjectName(QStringLiteral("le_id_e_recherche"));
        le_id_e_recherche->setGeometry(QRect(120, 20, 111, 22));
        pb_rechercher_e = new QPushButton(groupBox_11);
        pb_rechercher_e->setObjectName(QStringLiteral("pb_rechercher_e"));
        pb_rechercher_e->setGeometry(QRect(240, 20, 111, 24));
        label_26 = new QLabel(groupBox_11);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(10, 20, 105, 24));
        label_26->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Arial\";"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tab_fournisseur = new QTableView(tab_3);
        tab_fournisseur->setObjectName(QStringLiteral("tab_fournisseur"));
        tab_fournisseur->setGeometry(QRect(300, 10, 521, 341));
        groupBox_6 = new QGroupBox(tab_3);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(20, 10, 271, 371));
        label_9 = new QLabel(groupBox_6);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 40, 71, 16));
        label_15 = new QLabel(groupBox_6);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 120, 61, 16));
        le_id_2 = new QLineEdit(groupBox_6);
        le_id_2->setObjectName(QStringLiteral("le_id_2"));
        le_id_2->setGeometry(QRect(140, 40, 113, 20));
        label_18 = new QLabel(groupBox_6);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 80, 71, 16));
        label_19 = new QLabel(groupBox_6);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 200, 61, 20));
        le_telephone = new QLineEdit(groupBox_6);
        le_telephone->setObjectName(QStringLiteral("le_telephone"));
        le_telephone->setGeometry(QRect(140, 80, 113, 20));
        pb_changer_f = new QPushButton(groupBox_6);
        pb_changer_f->setObjectName(QStringLiteral("pb_changer_f"));
        pb_changer_f->setGeometry(QRect(140, 320, 116, 24));
        pb_ajoute_f = new QPushButton(groupBox_6);
        pb_ajoute_f->setObjectName(QStringLiteral("pb_ajoute_f"));
        pb_ajoute_f->setGeometry(QRect(10, 320, 117, 24));
        le_facture = new QLineEdit(groupBox_6);
        le_facture->setObjectName(QStringLiteral("le_facture"));
        le_facture->setGeometry(QRect(140, 120, 113, 20));
        label_17 = new QLabel(groupBox_6);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 160, 91, 16));
        le_nom_prenom = new QLineEdit(groupBox_6);
        le_nom_prenom->setObjectName(QStringLiteral("le_nom_prenom"));
        le_nom_prenom->setGeometry(QRect(140, 160, 113, 20));
        le_entreprise = new QComboBox(groupBox_6);
        le_entreprise->setObjectName(QStringLiteral("le_entreprise"));
        le_entreprise->setGeometry(QRect(140, 200, 111, 22));
        groupBox_8 = new QGroupBox(tab_3);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(320, 360, 501, 101));
        label_20 = new QLabel(groupBox_8);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(20, 20, 291, 31));
        label_20->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Arial\";"));
        le_id_supp_f = new QLineEdit(groupBox_8);
        le_id_supp_f->setObjectName(QStringLiteral("le_id_supp_f"));
        le_id_supp_f->setGeometry(QRect(20, 61, 381, 22));
        pb_supprimer_f = new QPushButton(groupBox_8);
        pb_supprimer_f->setObjectName(QStringLiteral("pb_supprimer_f"));
        pb_supprimer_f->setGeometry(QRect(410, 60, 67, 24));
        groupBox_9 = new QGroupBox(tab_3);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(20, 400, 281, 61));
        pb_imprime_pdf = new QPushButton(groupBox_9);
        pb_imprime_pdf->setObjectName(QStringLiteral("pb_imprime_pdf"));
        pb_imprime_pdf->setGeometry(QRect(100, 20, 75, 21));
        pb_pfd_f = new QPushButton(groupBox_9);
        pb_pfd_f->setObjectName(QStringLiteral("pb_pfd_f"));
        pb_pfd_f->setGeometry(QRect(190, 20, 75, 21));
        pb_afficher_f = new QPushButton(groupBox_9);
        pb_afficher_f->setObjectName(QStringLiteral("pb_afficher_f"));
        pb_afficher_f->setGeometry(QRect(10, 20, 75, 21));
        logo = new QGraphicsView(tab_3);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(830, 0, 61, 51));
        logo->setStyleSheet(QStringLiteral("border-color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        groupBox_4 = new QGroupBox(tab_4);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(460, 320, 381, 131));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 70, 105, 24));
        label_13->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Arial\";"));
        le_id_supp = new QLineEdit(groupBox_4);
        le_id_supp->setObjectName(QStringLiteral("le_id_supp"));
        le_id_supp->setGeometry(QRect(130, 70, 101, 22));
        pb_supprimer = new QPushButton(groupBox_4);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(240, 70, 111, 24));
        le_id_r = new QLineEdit(groupBox_4);
        le_id_r->setObjectName(QStringLiteral("le_id_r"));
        le_id_r->setGeometry(QRect(130, 30, 101, 22));
        pb_rechercher = new QPushButton(groupBox_4);
        pb_rechercher->setObjectName(QStringLiteral("pb_rechercher"));
        pb_rechercher->setGeometry(QRect(240, 30, 111, 24));
        groupBox_3 = new QGroupBox(tab_4);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 50, 281, 401));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 40, 47, 14));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 140, 47, 14));
        le_id = new QLineEdit(groupBox_3);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setGeometry(QRect(140, 40, 113, 20));
        pb_ajouter = new QPushButton(groupBox_3);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(12, 360, 122, 24));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 190, 51, 16));
        le_nombre = new QSpinBox(groupBox_3);
        le_nombre->setObjectName(QStringLiteral("le_nombre"));
        le_nombre->setGeometry(QRect(140, 190, 111, 22));
        pb_changer = new QPushButton(groupBox_3);
        pb_changer->setObjectName(QStringLiteral("pb_changer"));
        pb_changer->setGeometry(QRect(140, 360, 121, 24));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 250, 61, 20));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 90, 47, 14));
        le_type = new QComboBox(groupBox_3);
        le_type->setObjectName(QStringLiteral("le_type"));
        le_type->setGeometry(QRect(140, 90, 111, 22));
        le_prix = new QSpinBox(groupBox_3);
        le_prix->setObjectName(QStringLiteral("le_prix"));
        le_prix->setGeometry(QRect(140, 250, 111, 22));
        le_etat = new QComboBox(groupBox_3);
        le_etat->setObjectName(QStringLiteral("le_etat"));
        le_etat->setGeometry(QRect(140, 140, 111, 22));
        tab_equipement = new QTableView(tab_4);
        tab_equipement->setObjectName(QStringLiteral("tab_equipement"));
        tab_equipement->setGeometry(QRect(300, 50, 541, 261));
        groupBox_5 = new QGroupBox(tab_4);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(300, 320, 151, 131));
        pb_pfd = new QPushButton(groupBox_5);
        pb_pfd->setObjectName(QStringLiteral("pb_pfd"));
        pb_pfd->setGeometry(QRect(30, 90, 89, 24));
        pb_trier = new QPushButton(groupBox_5);
        pb_trier->setObjectName(QStringLiteral("pb_trier"));
        pb_trier->setGeometry(QRect(30, 10, 89, 24));
        pb_charger = new QPushButton(groupBox_5);
        pb_charger->setObjectName(QStringLiteral("pb_charger"));
        pb_charger->setGeometry(QRect(30, 50, 89, 24));
        groupBox = new QGroupBox(tab_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 831, 41));
        comboBoxfiltre = new QComboBox(groupBox);
        comboBoxfiltre->setObjectName(QStringLiteral("comboBoxfiltre"));
        comboBoxfiltre->setGeometry(QRect(680, 10, 141, 22));
        le_filtre = new QLineEdit(groupBox);
        le_filtre->setObjectName(QStringLiteral("le_filtre"));
        le_filtre->setGeometry(QRect(60, 10, 551, 22));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 10, 51, 22));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(630, 10, 32, 22));
        label_14 = new QLabel(tab_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(480, 350, 91, 24));
        label_14->setStyleSheet(QLatin1String("\n"
"font: 10pt \"Arial\";"));
        tabWidget->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        statv = new QFrame(tab);
        statv->setObjectName(QStringLiteral("statv"));
        statv->setGeometry(QRect(110, 40, 581, 321));
        horizontalLayout_3 = new QHBoxLayout(statv);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        tabWidget->addTab(tab, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        pb_todolist = new QPushButton(tab_5);
        pb_todolist->setObjectName(QStringLiteral("pb_todolist"));
        pb_todolist->setGeometry(QRect(160, 70, 101, 31));
        tabWidget->addTab(tab_5, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 914, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion des Clients", Q_NULLPTR));
        groupBox_7->setTitle(QString());
        label_22->setText(QApplication::translate("MainWindow", "Identifiant", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "Ville", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        pb_changer_e->setText(QApplication::translate("MainWindow", "Changer", Q_NULLPTR));
        pb_ajoute_e->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        le_ville->clear();
        le_ville->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Tunis", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Sousse", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Kairouan", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Bizerte", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Monastir", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Gabes", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Touzer", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Kef", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Gafsa", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Jendouba", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Kasserine", Q_NULLPTR)
         << QApplication::translate("MainWindow", "K\303\251bili", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Mahdia", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Manouba", Q_NULLPTR)
         << QApplication::translate("MainWindow", "M\303\251denine", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Nabeul", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Sfax", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Sidi Bouzid", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Siliana", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Tataouine", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Zaghouan", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Ariana", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Beja", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Ben Arous", Q_NULLPTR)
        );
        groupBox_10->setTitle(QString());
        pb_trier_e->setText(QApplication::translate("MainWindow", "Trier", Q_NULLPTR));
        pb_afficher_e->setText(QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        groupBox_11->setTitle(QString());
        label_25->setText(QApplication::translate("MainWindow", "Inserer l'identifiant", Q_NULLPTR));
        pb_supprimer_e->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        pb_rechercher_e->setText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "Inserer un mot cle", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Entreprise", Q_NULLPTR));
        groupBox_6->setTitle(QString());
        label_9->setText(QApplication::translate("MainWindow", "Identifiant", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Facture", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "T\303\251l\303\251phone", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Entreprise</p></body></html>", Q_NULLPTR));
        pb_changer_f->setText(QApplication::translate("MainWindow", "Changer", Q_NULLPTR));
        pb_ajoute_f->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Nom&Prenom", Q_NULLPTR));
        groupBox_8->setTitle(QString());
        label_20->setText(QApplication::translate("MainWindow", "Inserer l'identifiant que vous voulez supprimer ", Q_NULLPTR));
        pb_supprimer_f->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        groupBox_9->setTitle(QString());
        pb_imprime_pdf->setText(QApplication::translate("MainWindow", "Imprimer", Q_NULLPTR));
        pb_pfd_f->setText(QApplication::translate("MainWindow", "Pdf", Q_NULLPTR));
        pb_afficher_f->setText(QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Fournisseurs", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        label_13->setText(QApplication::translate("MainWindow", "Inserer l'identifiant", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        pb_rechercher->setText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        label_7->setText(QApplication::translate("MainWindow", "id", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "etat", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "nombre", Q_NULLPTR));
        pb_changer->setText(QApplication::translate("MainWindow", "Changer", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Prix</p></body></html>", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "type", Q_NULLPTR));
        le_type->clear();
        le_type->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Chaussures", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Raquette", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Balles", Q_NULLPTR)
        );
        le_etat->clear();
        le_etat->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Ancien", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Nouveau", Q_NULLPTR)
        );
        groupBox_5->setTitle(QString());
        pb_pfd->setText(QApplication::translate("MainWindow", "Pdf", Q_NULLPTR));
        pb_trier->setText(QApplication::translate("MainWindow", "Trier", Q_NULLPTR));
        pb_charger->setText(QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_16->setText(QApplication::translate("MainWindow", "Filtrer", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "Selon", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Inserer un mot", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Equipement", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Statistiques", Q_NULLPTR));
        pb_todolist->setText(QApplication::translate("MainWindow", "todolist", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Lettre", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
