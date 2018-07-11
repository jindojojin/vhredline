/********************************************************************************
** Form generated from reading ui file 'blackline.ui'
**
** Created: Thu Jul 5 16:31:46 2018
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_BLACKLINE_H
#define UI_BLACKLINE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlackLine
{
public:
    QWidget *centralWidget;
    QLabel *label_background;
    QCommandLinkButton *autoModeBtn;
    QCommandLinkButton *handModeBtn;
    QFrame *frame_automode_menu;
    QPushButton *next_btn_automode;
    QCheckBox *ram_checkbox_automode;
    QPushButton *close_automode_menu_btn;
    QPushButton *back_btn_automode;
    QPushButton *start_btn_automode;
    QTextBrowser *textBrowser;
    QLabel *label_folder_path;
    QFrame *frame_handmode_menu;
    QTabWidget *tab_hand_mode_widget;
    QWidget *tab_memory;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QGroupBox *memory_ProcessListing_group;
    QGridLayout *gridLayout_3;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_38;
    QCheckBox *checkBox_45;
    QCheckBox *checkBox_40;
    QCheckBox *checkBox_39;
    QCheckBox *checkBox_32;
    QCheckBox *checkBox_34;
    QGroupBox *memory_DriversEnumeration_group;
    QGridLayout *gridLayout_4;
    QCheckBox *checkBox_15;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_12;
    QCheckBox *checkBox_14;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox_13;
    QCheckBox *checkBox_16;
    QGroupBox *memory_HookDetection;
    QGridLayout *gridLayout_5;
    QCheckBox *checkBox_96;
    QCheckBox *checkBox_98;
    QCheckBox *checkBox_97;
    QCheckBox *checkBox_99;
    QCheckBox *checkBox_89;
    QWidget *tab_system;
    QGroupBox *system_SystemInfomation_group;
    QCheckBox *checkBox_41;
    QCheckBox *checkBox_44;
    QCheckBox *checkBox_43;
    QCheckBox *checkBox_37;
    QCheckBox *checkBox_36;
    QCheckBox *system_EventLogs_group;
    QCheckBox *system_RegistryEnumeration_group;
    QWidget *tab_network;
    QCheckBox *checkBox;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_23;
    QCheckBox *checkBox_33;
    QGroupBox *network_BrowserHistory_group;
    QCheckBox *checkBox_35;
    QCheckBox *checkBox_42;
    QCheckBox *checkBox_47;
    QCheckBox *checkBox_48;
    QCheckBox *checkBox_49;
    QCheckBox *checkBox_50;
    QWidget *tab_disk;
    QGridLayout *gridLayout_6;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_7;
    QGroupBox *disk_FileEnumeration_group;
    QGridLayout *gridLayout_8;
    QCheckBox *checkBox_51;
    QCheckBox *checkBox_52;
    QCheckBox *checkBox_53;
    QCheckBox *checkBox_54;
    QCheckBox *checkBox_59;
    QCheckBox *checkBox_62;
    QCheckBox *checkBox_61;
    QCheckBox *checkBox_60;
    QCheckBox *checkBox_63;
    QCheckBox *checkBox_66;
    QCheckBox *checkBox_65;
    QCheckBox *checkBox_64;
    QCheckBox *checkBox_67;
    QCheckBox *checkBox_70;
    QCheckBox *checkBox_69;
    QCheckBox *checkBox_68;
    QGroupBox *disk_DiskEnumeration_group;
    QGridLayout *gridLayout_9;
    QCheckBox *checkBox_71;
    QCheckBox *checkBox_72;
    QWidget *tab_other;
    QGridLayout *gridLayout_10;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *gridLayout_14;
    QGroupBox *other_Services_group;
    QGridLayout *gridLayout_12;
    QCheckBox *checkBox_73;
    QCheckBox *checkBox_75;
    QCheckBox *checkBox_76;
    QCheckBox *checkBox_74;
    QGroupBox *other_Tasks_group;
    QGridLayout *gridLayout_13;
    QCheckBox *checkBox_78;
    QCheckBox *checkBox_79;
    QCheckBox *checkBox_77;
    QCheckBox *checkBox_80;
    QGroupBox *other_CommonPersistenceMechanisms_group;
    QGridLayout *gridLayout_15;
    QCheckBox *checkBox_82;
    QCheckBox *checkBox_81;
    QCheckBox *checkBox_88;
    QCheckBox *checkBox_85;
    QCheckBox *checkBox_83;
    QCheckBox *checkBox_86;
    QCheckBox *checkBox_87;
    QCheckBox *checkBox_84;
    QPushButton *close_handmode_menu_btn;
    QPushButton *next_btn_handmode;
    QPushButton *start_btn_handmode;
    QPushButton *back_btn_handmode;
    QFrame *frame_output_text;
    QGridLayout *gridLayout_16;
    QScrollArea *scrollOutputArea;
    QWidget *scroll_output_info;
    QGridLayout *gridLayout_11;
    QLabel *label_outpu_info;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancel_btn;
    QPushButton *finish_btn;

    void setupUi(QMainWindow *BlackLine)
    {
    if (BlackLine->objectName().isEmpty())
        BlackLine->setObjectName(QString::fromUtf8("BlackLine"));
    BlackLine->resize(1000, 598);
    centralWidget = new QWidget(BlackLine);
    centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
    centralWidget->setMinimumSize(QSize(500, 400));
    centralWidget->setMaximumSize(QSize(1000, 600));
    centralWidget->setLayoutDirection(Qt::LeftToRight);
    label_background = new QLabel(centralWidget);
    label_background->setObjectName(QString::fromUtf8("label_background"));
    label_background->setGeometry(QRect(-10, 0, 1011, 601));
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(label_background->sizePolicy().hasHeightForWidth());
    label_background->setSizePolicy(sizePolicy);
    label_background->setMinimumSize(QSize(887, 418));
    label_background->setMaximumSize(QSize(1015, 745));
    label_background->setSizeIncrement(QSize(22, 31));
    label_background->setAutoFillBackground(false);
    label_background->setPixmap(QPixmap(QString::fromUtf8(":/Image/rsc/14287-01.png")));
    label_background->setScaledContents(true);
    autoModeBtn = new QCommandLinkButton(centralWidget);
    autoModeBtn->setObjectName(QString::fromUtf8("autoModeBtn"));
    autoModeBtn->setEnabled(true);
    autoModeBtn->setGeometry(QRect(50, 60, 235, 48));
    QFont font;
    font.setPointSize(14);
    autoModeBtn->setFont(font);
    autoModeBtn->setCursor(QCursor(Qt::PointingHandCursor));
    autoModeBtn->setFocusPolicy(Qt::NoFocus);
    handModeBtn = new QCommandLinkButton(centralWidget);
    handModeBtn->setObjectName(QString::fromUtf8("handModeBtn"));
    handModeBtn->setGeometry(QRect(50, 130, 246, 48));
    handModeBtn->setFont(font);
    handModeBtn->setCursor(QCursor(Qt::PointingHandCursor));
    frame_automode_menu = new QFrame(centralWidget);
    frame_automode_menu->setObjectName(QString::fromUtf8("frame_automode_menu"));
    frame_automode_menu->setGeometry(QRect(378, 11, 611, 571));
    frame_automode_menu->setAutoFillBackground(true);
    frame_automode_menu->setFrameShape(QFrame::StyledPanel);
    frame_automode_menu->setFrameShadow(QFrame::Raised);
    next_btn_automode = new QPushButton(frame_automode_menu);
    next_btn_automode->setObjectName(QString::fromUtf8("next_btn_automode"));
    next_btn_automode->setGeometry(QRect(470, 520, 111, 41));
    ram_checkbox_automode = new QCheckBox(frame_automode_menu);
    ram_checkbox_automode->setObjectName(QString::fromUtf8("ram_checkbox_automode"));
    ram_checkbox_automode->setGeometry(QRect(20, 480, 191, 21));
    QFont font1;
    font1.setPointSize(9);
    font1.setBold(true);
    font1.setWeight(75);
    ram_checkbox_automode->setFont(font1);
    close_automode_menu_btn = new QPushButton(frame_automode_menu);
    close_automode_menu_btn->setObjectName(QString::fromUtf8("close_automode_menu_btn"));
    close_automode_menu_btn->setGeometry(QRect(590, 0, 20, 16));
    back_btn_automode = new QPushButton(frame_automode_menu);
    back_btn_automode->setObjectName(QString::fromUtf8("back_btn_automode"));
    back_btn_automode->setGeometry(QRect(370, 520, 91, 41));
    start_btn_automode = new QPushButton(frame_automode_menu);
    start_btn_automode->setObjectName(QString::fromUtf8("start_btn_automode"));
    start_btn_automode->setGeometry(QRect(470, 520, 111, 41));
    textBrowser = new QTextBrowser(frame_automode_menu);
    textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
    textBrowser->setGeometry(QRect(20, 30, 571, 441));
    QFont font2;
    font2.setPointSize(12);
    textBrowser->setFont(font2);
    label_folder_path = new QLabel(centralWidget);
    label_folder_path->setObjectName(QString::fromUtf8("label_folder_path"));
    label_folder_path->setGeometry(QRect(390, 530, 341, 41));
    frame_handmode_menu = new QFrame(centralWidget);
    frame_handmode_menu->setObjectName(QString::fromUtf8("frame_handmode_menu"));
    frame_handmode_menu->setGeometry(QRect(380, 10, 611, 571));
    frame_handmode_menu->setAutoFillBackground(true);
    frame_handmode_menu->setFrameShape(QFrame::StyledPanel);
    frame_handmode_menu->setFrameShadow(QFrame::Raised);
    tab_hand_mode_widget = new QTabWidget(frame_handmode_menu);
    tab_hand_mode_widget->setObjectName(QString::fromUtf8("tab_hand_mode_widget"));
    tab_hand_mode_widget->setGeometry(QRect(20, 10, 561, 501));
    tab_hand_mode_widget->setAutoFillBackground(true);
    tab_memory = new QWidget();
    tab_memory->setObjectName(QString::fromUtf8("tab_memory"));
    gridLayout = new QGridLayout(tab_memory);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(0);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    scrollArea = new QScrollArea(tab_memory);
    scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
    scrollArea->setWidgetResizable(true);
    scrollAreaWidgetContents = new QWidget();
    scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
    scrollAreaWidgetContents->setGeometry(QRect(0, -412, 532, 885));
    gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
    gridLayout_2->setSpacing(6);
    gridLayout_2->setMargin(11);
    gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
    memory_ProcessListing_group = new QGroupBox(scrollAreaWidgetContents);
    memory_ProcessListing_group->setObjectName(QString::fromUtf8("memory_ProcessListing_group"));
    memory_ProcessListing_group->setFont(font1);
    memory_ProcessListing_group->setFlat(true);
    memory_ProcessListing_group->setCheckable(true);
    memory_ProcessListing_group->setChecked(false);
    gridLayout_3 = new QGridLayout(memory_ProcessListing_group);
    gridLayout_3->setSpacing(6);
    gridLayout_3->setMargin(11);
    gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
    checkBox_2 = new QCheckBox(memory_ProcessListing_group);
    checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

    gridLayout_3->addWidget(checkBox_2, 0, 0, 1, 1);

    checkBox_3 = new QCheckBox(memory_ProcessListing_group);
    checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

    gridLayout_3->addWidget(checkBox_3, 1, 0, 1, 1);

    checkBox_4 = new QCheckBox(memory_ProcessListing_group);
    checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

    gridLayout_3->addWidget(checkBox_4, 2, 0, 1, 1);

    checkBox_5 = new QCheckBox(memory_ProcessListing_group);
    checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

    gridLayout_3->addWidget(checkBox_5, 3, 0, 1, 1);

    checkBox_6 = new QCheckBox(memory_ProcessListing_group);
    checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));

    gridLayout_3->addWidget(checkBox_6, 4, 0, 1, 1);

    checkBox_7 = new QCheckBox(memory_ProcessListing_group);
    checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));

    gridLayout_3->addWidget(checkBox_7, 5, 0, 1, 1);

    checkBox_38 = new QCheckBox(memory_ProcessListing_group);
    checkBox_38->setObjectName(QString::fromUtf8("checkBox_38"));

    gridLayout_3->addWidget(checkBox_38, 6, 0, 1, 1);

    checkBox_45 = new QCheckBox(memory_ProcessListing_group);
    checkBox_45->setObjectName(QString::fromUtf8("checkBox_45"));

    gridLayout_3->addWidget(checkBox_45, 7, 0, 1, 1);

    checkBox_40 = new QCheckBox(memory_ProcessListing_group);
    checkBox_40->setObjectName(QString::fromUtf8("checkBox_40"));

    gridLayout_3->addWidget(checkBox_40, 8, 0, 1, 1);

    checkBox_39 = new QCheckBox(memory_ProcessListing_group);
    checkBox_39->setObjectName(QString::fromUtf8("checkBox_39"));

    gridLayout_3->addWidget(checkBox_39, 9, 0, 1, 1);

    checkBox_32 = new QCheckBox(memory_ProcessListing_group);
    checkBox_32->setObjectName(QString::fromUtf8("checkBox_32"));

    gridLayout_3->addWidget(checkBox_32, 10, 0, 1, 1);

    checkBox_34 = new QCheckBox(memory_ProcessListing_group);
    checkBox_34->setObjectName(QString::fromUtf8("checkBox_34"));

    gridLayout_3->addWidget(checkBox_34, 11, 0, 1, 1);


    gridLayout_2->addWidget(memory_ProcessListing_group, 1, 0, 1, 2);

    memory_DriversEnumeration_group = new QGroupBox(scrollAreaWidgetContents);
    memory_DriversEnumeration_group->setObjectName(QString::fromUtf8("memory_DriversEnumeration_group"));
    memory_DriversEnumeration_group->setFont(font1);
    memory_DriversEnumeration_group->setFlat(true);
    memory_DriversEnumeration_group->setCheckable(true);
    memory_DriversEnumeration_group->setChecked(false);
    gridLayout_4 = new QGridLayout(memory_DriversEnumeration_group);
    gridLayout_4->setSpacing(6);
    gridLayout_4->setMargin(11);
    gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
    checkBox_15 = new QCheckBox(memory_DriversEnumeration_group);
    checkBox_15->setObjectName(QString::fromUtf8("checkBox_15"));

    gridLayout_4->addWidget(checkBox_15, 0, 0, 1, 1);

    checkBox_10 = new QCheckBox(memory_DriversEnumeration_group);
    checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));

    gridLayout_4->addWidget(checkBox_10, 1, 0, 1, 1);

    checkBox_12 = new QCheckBox(memory_DriversEnumeration_group);
    checkBox_12->setObjectName(QString::fromUtf8("checkBox_12"));

    gridLayout_4->addWidget(checkBox_12, 2, 0, 1, 1);

    checkBox_14 = new QCheckBox(memory_DriversEnumeration_group);
    checkBox_14->setObjectName(QString::fromUtf8("checkBox_14"));

    gridLayout_4->addWidget(checkBox_14, 3, 0, 1, 1);

    checkBox_9 = new QCheckBox(memory_DriversEnumeration_group);
    checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));

    gridLayout_4->addWidget(checkBox_9, 4, 0, 1, 1);

    checkBox_11 = new QCheckBox(memory_DriversEnumeration_group);
    checkBox_11->setObjectName(QString::fromUtf8("checkBox_11"));

    gridLayout_4->addWidget(checkBox_11, 5, 0, 1, 1);

    checkBox_13 = new QCheckBox(memory_DriversEnumeration_group);
    checkBox_13->setObjectName(QString::fromUtf8("checkBox_13"));

    gridLayout_4->addWidget(checkBox_13, 6, 0, 1, 1);


    gridLayout_2->addWidget(memory_DriversEnumeration_group, 2, 0, 1, 2);

    checkBox_16 = new QCheckBox(scrollAreaWidgetContents);
    checkBox_16->setObjectName(QString::fromUtf8("checkBox_16"));
    checkBox_16->setFont(font1);

    gridLayout_2->addWidget(checkBox_16, 4, 0, 1, 1);

    memory_HookDetection = new QGroupBox(scrollAreaWidgetContents);
    memory_HookDetection->setObjectName(QString::fromUtf8("memory_HookDetection"));
    memory_HookDetection->setFont(font1);
    memory_HookDetection->setFlat(true);
    memory_HookDetection->setCheckable(true);
    memory_HookDetection->setChecked(false);
    gridLayout_5 = new QGridLayout(memory_HookDetection);
    gridLayout_5->setSpacing(6);
    gridLayout_5->setMargin(11);
    gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
    checkBox_96 = new QCheckBox(memory_HookDetection);
    checkBox_96->setObjectName(QString::fromUtf8("checkBox_96"));

    gridLayout_5->addWidget(checkBox_96, 0, 0, 1, 1);

    checkBox_98 = new QCheckBox(memory_HookDetection);
    checkBox_98->setObjectName(QString::fromUtf8("checkBox_98"));

    gridLayout_5->addWidget(checkBox_98, 1, 0, 1, 1);

    checkBox_97 = new QCheckBox(memory_HookDetection);
    checkBox_97->setObjectName(QString::fromUtf8("checkBox_97"));

    gridLayout_5->addWidget(checkBox_97, 2, 0, 1, 1);

    checkBox_99 = new QCheckBox(memory_HookDetection);
    checkBox_99->setObjectName(QString::fromUtf8("checkBox_99"));

    gridLayout_5->addWidget(checkBox_99, 3, 0, 1, 1);

    checkBox_89 = new QCheckBox(memory_HookDetection);
    checkBox_89->setObjectName(QString::fromUtf8("checkBox_89"));

    gridLayout_5->addWidget(checkBox_89, 4, 0, 1, 1);


    gridLayout_2->addWidget(memory_HookDetection, 3, 0, 1, 1);

    scrollArea->setWidget(scrollAreaWidgetContents);

    gridLayout->addWidget(scrollArea, 0, 0, 1, 2);

    tab_hand_mode_widget->addTab(tab_memory, QString());
    tab_system = new QWidget();
    tab_system->setObjectName(QString::fromUtf8("tab_system"));
    tab_system->setAutoFillBackground(true);
    system_SystemInfomation_group = new QGroupBox(tab_system);
    system_SystemInfomation_group->setObjectName(QString::fromUtf8("system_SystemInfomation_group"));
    system_SystemInfomation_group->setGeometry(QRect(11, 11, 535, 181));
    system_SystemInfomation_group->setFont(font1);
    system_SystemInfomation_group->setFlat(true);
    system_SystemInfomation_group->setCheckable(true);
    system_SystemInfomation_group->setChecked(false);
    checkBox_41 = new QCheckBox(system_SystemInfomation_group);
    checkBox_41->setObjectName(QString::fromUtf8("checkBox_41"));
    checkBox_41->setGeometry(QRect(20, 30, 242, 23));
    checkBox_44 = new QCheckBox(system_SystemInfomation_group);
    checkBox_44->setObjectName(QString::fromUtf8("checkBox_44"));
    checkBox_44->setGeometry(QRect(20, 60, 260, 23));
    checkBox_43 = new QCheckBox(system_SystemInfomation_group);
    checkBox_43->setObjectName(QString::fromUtf8("checkBox_43"));
    checkBox_43->setGeometry(QRect(20, 90, 228, 23));
    checkBox_37 = new QCheckBox(system_SystemInfomation_group);
    checkBox_37->setObjectName(QString::fromUtf8("checkBox_37"));
    checkBox_37->setGeometry(QRect(20, 120, 134, 23));
    checkBox_36 = new QCheckBox(system_SystemInfomation_group);
    checkBox_36->setObjectName(QString::fromUtf8("checkBox_36"));
    checkBox_36->setGeometry(QRect(20, 150, 155, 23));
    system_EventLogs_group = new QCheckBox(tab_system);
    system_EventLogs_group->setObjectName(QString::fromUtf8("system_EventLogs_group"));
    system_EventLogs_group->setGeometry(QRect(10, 230, 109, 23));
    system_EventLogs_group->setFont(font1);
    system_RegistryEnumeration_group = new QCheckBox(tab_system);
    system_RegistryEnumeration_group->setObjectName(QString::fromUtf8("system_RegistryEnumeration_group"));
    system_RegistryEnumeration_group->setGeometry(QRect(10, 200, 190, 23));
    system_RegistryEnumeration_group->setFont(font1);
    tab_hand_mode_widget->addTab(tab_system, QString());
    tab_network = new QWidget();
    tab_network->setObjectName(QString::fromUtf8("tab_network"));
    tab_network->setAutoFillBackground(true);
    checkBox = new QCheckBox(tab_network);
    checkBox->setObjectName(QString::fromUtf8("checkBox"));
    checkBox->setGeometry(QRect(20, 20, 161, 21));
    checkBox->setFont(font1);
    checkBox_8 = new QCheckBox(tab_network);
    checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));
    checkBox_8->setGeometry(QRect(20, 50, 161, 21));
    checkBox_8->setFont(font1);
    checkBox_23 = new QCheckBox(tab_network);
    checkBox_23->setObjectName(QString::fromUtf8("checkBox_23"));
    checkBox_23->setGeometry(QRect(20, 80, 121, 21));
    checkBox_23->setFont(font1);
    checkBox_33 = new QCheckBox(tab_network);
    checkBox_33->setObjectName(QString::fromUtf8("checkBox_33"));
    checkBox_33->setGeometry(QRect(20, 110, 121, 21));
    checkBox_33->setFont(font1);
    network_BrowserHistory_group = new QGroupBox(tab_network);
    network_BrowserHistory_group->setObjectName(QString::fromUtf8("network_BrowserHistory_group"));
    network_BrowserHistory_group->setGeometry(QRect(20, 140, 481, 231));
    network_BrowserHistory_group->setFont(font1);
    network_BrowserHistory_group->setFlat(true);
    network_BrowserHistory_group->setCheckable(true);
    network_BrowserHistory_group->setChecked(false);
    checkBox_35 = new QCheckBox(network_BrowserHistory_group);
    checkBox_35->setObjectName(QString::fromUtf8("checkBox_35"));
    checkBox_35->setGeometry(QRect(30, 30, 82, 21));
    checkBox_42 = new QCheckBox(network_BrowserHistory_group);
    checkBox_42->setObjectName(QString::fromUtf8("checkBox_42"));
    checkBox_42->setGeometry(QRect(30, 60, 111, 21));
    checkBox_47 = new QCheckBox(network_BrowserHistory_group);
    checkBox_47->setObjectName(QString::fromUtf8("checkBox_47"));
    checkBox_47->setGeometry(QRect(30, 90, 191, 21));
    checkBox_48 = new QCheckBox(network_BrowserHistory_group);
    checkBox_48->setObjectName(QString::fromUtf8("checkBox_48"));
    checkBox_48->setGeometry(QRect(30, 120, 121, 21));
    checkBox_49 = new QCheckBox(network_BrowserHistory_group);
    checkBox_49->setObjectName(QString::fromUtf8("checkBox_49"));
    checkBox_49->setGeometry(QRect(30, 150, 161, 21));
    checkBox_50 = new QCheckBox(network_BrowserHistory_group);
    checkBox_50->setObjectName(QString::fromUtf8("checkBox_50"));
    checkBox_50->setGeometry(QRect(30, 180, 241, 21));
    tab_hand_mode_widget->addTab(tab_network, QString());
    tab_disk = new QWidget();
    tab_disk->setObjectName(QString::fromUtf8("tab_disk"));
    tab_disk->setAutoFillBackground(false);
    gridLayout_6 = new QGridLayout(tab_disk);
    gridLayout_6->setSpacing(6);
    gridLayout_6->setMargin(0);
    gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
    scrollArea_2 = new QScrollArea(tab_disk);
    scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
    scrollArea_2->setAutoFillBackground(true);
    scrollArea_2->setWidgetResizable(true);
    scrollAreaWidgetContents_2 = new QWidget();
    scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
    scrollAreaWidgetContents_2->setGeometry(QRect(0, -164, 532, 635));
    gridLayout_7 = new QGridLayout(scrollAreaWidgetContents_2);
    gridLayout_7->setSpacing(6);
    gridLayout_7->setMargin(11);
    gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
    disk_FileEnumeration_group = new QGroupBox(scrollAreaWidgetContents_2);
    disk_FileEnumeration_group->setObjectName(QString::fromUtf8("disk_FileEnumeration_group"));
    disk_FileEnumeration_group->setFont(font1);
    disk_FileEnumeration_group->setFlat(true);
    disk_FileEnumeration_group->setCheckable(true);
    disk_FileEnumeration_group->setChecked(false);
    gridLayout_8 = new QGridLayout(disk_FileEnumeration_group);
    gridLayout_8->setSpacing(6);
    gridLayout_8->setMargin(11);
    gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
    checkBox_51 = new QCheckBox(disk_FileEnumeration_group);
    checkBox_51->setObjectName(QString::fromUtf8("checkBox_51"));

    gridLayout_8->addWidget(checkBox_51, 0, 0, 1, 1);

    checkBox_52 = new QCheckBox(disk_FileEnumeration_group);
    checkBox_52->setObjectName(QString::fromUtf8("checkBox_52"));

    gridLayout_8->addWidget(checkBox_52, 1, 0, 1, 1);

    checkBox_53 = new QCheckBox(disk_FileEnumeration_group);
    checkBox_53->setObjectName(QString::fromUtf8("checkBox_53"));

    gridLayout_8->addWidget(checkBox_53, 2, 0, 1, 1);

    checkBox_54 = new QCheckBox(disk_FileEnumeration_group);
    checkBox_54->setObjectName(QString::fromUtf8("checkBox_54"));

    gridLayout_8->addWidget(checkBox_54, 3, 0, 1, 1);

    checkBox_59 = new QCheckBox(disk_FileEnumeration_group);
    checkBox_59->setObjectName(QString::fromUtf8("checkBox_59"));

    gridLayout_8->addWidget(checkBox_59, 4, 0, 1, 1);

    checkBox_62 = new QCheckBox(disk_FileEnumeration_group);
    checkBox_62->setObjectName(QString::fromUtf8("checkBox_62"));

    gridLayout_8->addWidget(checkBox_62, 5, 0, 1, 1);

    checkBox_61 = new QCheckBox(disk_FileEnumeration_group);
    checkBox_61->setObjectName(QString::fromUtf8("checkBox_61"));

    gridLayout_8->addWidget(checkBox_61, 6, 0, 1, 1);

    checkBox_60 = new QCheckBox(disk_FileEnumeration_group);
    checkBox_60->setObjectName(QString::fromUtf8("checkBox_60"));

    gridLayout_8->addWidget(checkBox_60, 7, 0, 1, 1);

    checkBox_63 = new QCheckBox(disk_FileEnumeration_group);
    checkBox_63->setObjectName(QString::fromUtf8("checkBox_63"));

    gridLayout_8->addWidget(checkBox_63, 8, 0, 1, 1);

    checkBox_66 = new QCheckBox(disk_FileEnumeration_group);
    checkBox_66->setObjectName(QString::fromUtf8("checkBox_66"));

    gridLayout_8->addWidget(checkBox_66, 9, 0, 1, 1);

    checkBox_65 = new QCheckBox(disk_FileEnumeration_group);
    checkBox_65->setObjectName(QString::fromUtf8("checkBox_65"));

    gridLayout_8->addWidget(checkBox_65, 10, 0, 1, 1);

    checkBox_64 = new QCheckBox(disk_FileEnumeration_group);
    checkBox_64->setObjectName(QString::fromUtf8("checkBox_64"));

    gridLayout_8->addWidget(checkBox_64, 11, 0, 1, 1);

    checkBox_67 = new QCheckBox(disk_FileEnumeration_group);
    checkBox_67->setObjectName(QString::fromUtf8("checkBox_67"));

    gridLayout_8->addWidget(checkBox_67, 12, 0, 1, 1);

    checkBox_70 = new QCheckBox(disk_FileEnumeration_group);
    checkBox_70->setObjectName(QString::fromUtf8("checkBox_70"));

    gridLayout_8->addWidget(checkBox_70, 13, 0, 1, 1);

    checkBox_69 = new QCheckBox(disk_FileEnumeration_group);
    checkBox_69->setObjectName(QString::fromUtf8("checkBox_69"));

    gridLayout_8->addWidget(checkBox_69, 14, 0, 1, 1);

    checkBox_68 = new QCheckBox(disk_FileEnumeration_group);
    checkBox_68->setObjectName(QString::fromUtf8("checkBox_68"));

    gridLayout_8->addWidget(checkBox_68, 15, 0, 1, 1);


    gridLayout_7->addWidget(disk_FileEnumeration_group, 0, 0, 1, 1);

    disk_DiskEnumeration_group = new QGroupBox(scrollAreaWidgetContents_2);
    disk_DiskEnumeration_group->setObjectName(QString::fromUtf8("disk_DiskEnumeration_group"));
    disk_DiskEnumeration_group->setFont(font1);
    disk_DiskEnumeration_group->setFlat(true);
    disk_DiskEnumeration_group->setCheckable(true);
    disk_DiskEnumeration_group->setChecked(false);
    gridLayout_9 = new QGridLayout(disk_DiskEnumeration_group);
    gridLayout_9->setSpacing(6);
    gridLayout_9->setMargin(11);
    gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
    checkBox_71 = new QCheckBox(disk_DiskEnumeration_group);
    checkBox_71->setObjectName(QString::fromUtf8("checkBox_71"));

    gridLayout_9->addWidget(checkBox_71, 0, 0, 1, 1);

    checkBox_72 = new QCheckBox(disk_DiskEnumeration_group);
    checkBox_72->setObjectName(QString::fromUtf8("checkBox_72"));

    gridLayout_9->addWidget(checkBox_72, 1, 0, 1, 1);


    gridLayout_7->addWidget(disk_DiskEnumeration_group, 1, 0, 1, 1);

    scrollArea_2->setWidget(scrollAreaWidgetContents_2);

    gridLayout_6->addWidget(scrollArea_2, 0, 0, 1, 1);

    tab_hand_mode_widget->addTab(tab_disk, QString());
    tab_other = new QWidget();
    tab_other->setObjectName(QString::fromUtf8("tab_other"));
    gridLayout_10 = new QGridLayout(tab_other);
    gridLayout_10->setSpacing(6);
    gridLayout_10->setMargin(0);
    gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
    scrollArea_3 = new QScrollArea(tab_other);
    scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
    scrollArea_3->setWidgetResizable(true);
    scrollAreaWidgetContents_3 = new QWidget();
    scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
    scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 532, 577));
    gridLayout_14 = new QGridLayout(scrollAreaWidgetContents_3);
    gridLayout_14->setSpacing(6);
    gridLayout_14->setMargin(11);
    gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
    other_Services_group = new QGroupBox(scrollAreaWidgetContents_3);
    other_Services_group->setObjectName(QString::fromUtf8("other_Services_group"));
    other_Services_group->setFlat(true);
    other_Services_group->setCheckable(true);
    other_Services_group->setChecked(false);
    gridLayout_12 = new QGridLayout(other_Services_group);
    gridLayout_12->setSpacing(6);
    gridLayout_12->setMargin(11);
    gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
    checkBox_73 = new QCheckBox(other_Services_group);
    checkBox_73->setObjectName(QString::fromUtf8("checkBox_73"));

    gridLayout_12->addWidget(checkBox_73, 0, 0, 1, 1);

    checkBox_75 = new QCheckBox(other_Services_group);
    checkBox_75->setObjectName(QString::fromUtf8("checkBox_75"));

    gridLayout_12->addWidget(checkBox_75, 1, 0, 1, 1);

    checkBox_76 = new QCheckBox(other_Services_group);
    checkBox_76->setObjectName(QString::fromUtf8("checkBox_76"));

    gridLayout_12->addWidget(checkBox_76, 2, 0, 1, 1);

    checkBox_74 = new QCheckBox(other_Services_group);
    checkBox_74->setObjectName(QString::fromUtf8("checkBox_74"));

    gridLayout_12->addWidget(checkBox_74, 6, 0, 1, 1);


    gridLayout_14->addWidget(other_Services_group, 0, 0, 1, 1);

    other_Tasks_group = new QGroupBox(scrollAreaWidgetContents_3);
    other_Tasks_group->setObjectName(QString::fromUtf8("other_Tasks_group"));
    other_Tasks_group->setFlat(true);
    other_Tasks_group->setCheckable(true);
    other_Tasks_group->setChecked(false);
    gridLayout_13 = new QGridLayout(other_Tasks_group);
    gridLayout_13->setSpacing(6);
    gridLayout_13->setMargin(11);
    gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
    checkBox_78 = new QCheckBox(other_Tasks_group);
    checkBox_78->setObjectName(QString::fromUtf8("checkBox_78"));

    gridLayout_13->addWidget(checkBox_78, 0, 0, 1, 1);

    checkBox_79 = new QCheckBox(other_Tasks_group);
    checkBox_79->setObjectName(QString::fromUtf8("checkBox_79"));

    gridLayout_13->addWidget(checkBox_79, 1, 0, 1, 1);

    checkBox_77 = new QCheckBox(other_Tasks_group);
    checkBox_77->setObjectName(QString::fromUtf8("checkBox_77"));

    gridLayout_13->addWidget(checkBox_77, 2, 0, 1, 1);

    checkBox_80 = new QCheckBox(other_Tasks_group);
    checkBox_80->setObjectName(QString::fromUtf8("checkBox_80"));

    gridLayout_13->addWidget(checkBox_80, 3, 0, 1, 1);


    gridLayout_14->addWidget(other_Tasks_group, 2, 0, 1, 1);

    other_CommonPersistenceMechanisms_group = new QGroupBox(scrollAreaWidgetContents_3);
    other_CommonPersistenceMechanisms_group->setObjectName(QString::fromUtf8("other_CommonPersistenceMechanisms_group"));
    other_CommonPersistenceMechanisms_group->setFlat(true);
    other_CommonPersistenceMechanisms_group->setCheckable(true);
    other_CommonPersistenceMechanisms_group->setChecked(false);
    gridLayout_15 = new QGridLayout(other_CommonPersistenceMechanisms_group);
    gridLayout_15->setSpacing(6);
    gridLayout_15->setMargin(11);
    gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
    checkBox_82 = new QCheckBox(other_CommonPersistenceMechanisms_group);
    checkBox_82->setObjectName(QString::fromUtf8("checkBox_82"));

    gridLayout_15->addWidget(checkBox_82, 0, 0, 1, 1);

    checkBox_81 = new QCheckBox(other_CommonPersistenceMechanisms_group);
    checkBox_81->setObjectName(QString::fromUtf8("checkBox_81"));

    gridLayout_15->addWidget(checkBox_81, 1, 0, 1, 1);

    checkBox_88 = new QCheckBox(other_CommonPersistenceMechanisms_group);
    checkBox_88->setObjectName(QString::fromUtf8("checkBox_88"));

    gridLayout_15->addWidget(checkBox_88, 2, 0, 1, 1);

    checkBox_85 = new QCheckBox(other_CommonPersistenceMechanisms_group);
    checkBox_85->setObjectName(QString::fromUtf8("checkBox_85"));

    gridLayout_15->addWidget(checkBox_85, 3, 0, 1, 1);

    checkBox_83 = new QCheckBox(other_CommonPersistenceMechanisms_group);
    checkBox_83->setObjectName(QString::fromUtf8("checkBox_83"));

    gridLayout_15->addWidget(checkBox_83, 5, 0, 1, 1);

    checkBox_86 = new QCheckBox(other_CommonPersistenceMechanisms_group);
    checkBox_86->setObjectName(QString::fromUtf8("checkBox_86"));

    gridLayout_15->addWidget(checkBox_86, 4, 0, 1, 1);

    checkBox_87 = new QCheckBox(other_CommonPersistenceMechanisms_group);
    checkBox_87->setObjectName(QString::fromUtf8("checkBox_87"));

    gridLayout_15->addWidget(checkBox_87, 6, 0, 1, 1);

    checkBox_84 = new QCheckBox(other_CommonPersistenceMechanisms_group);
    checkBox_84->setObjectName(QString::fromUtf8("checkBox_84"));

    gridLayout_15->addWidget(checkBox_84, 7, 0, 1, 1);


    gridLayout_14->addWidget(other_CommonPersistenceMechanisms_group, 3, 0, 1, 1);

    scrollArea_3->setWidget(scrollAreaWidgetContents_3);

    gridLayout_10->addWidget(scrollArea_3, 0, 0, 1, 1);

    tab_hand_mode_widget->addTab(tab_other, QString());
    close_handmode_menu_btn = new QPushButton(frame_handmode_menu);
    close_handmode_menu_btn->setObjectName(QString::fromUtf8("close_handmode_menu_btn"));
    close_handmode_menu_btn->setGeometry(QRect(590, 0, 20, 16));
    next_btn_handmode = new QPushButton(frame_handmode_menu);
    next_btn_handmode->setObjectName(QString::fromUtf8("next_btn_handmode"));
    next_btn_handmode->setGeometry(QRect(470, 520, 111, 41));
    start_btn_handmode = new QPushButton(frame_handmode_menu);
    start_btn_handmode->setObjectName(QString::fromUtf8("start_btn_handmode"));
    start_btn_handmode->setGeometry(QRect(470, 520, 111, 41));
    start_btn_handmode->setFlat(false);
    back_btn_handmode = new QPushButton(frame_handmode_menu);
    back_btn_handmode->setObjectName(QString::fromUtf8("back_btn_handmode"));
    back_btn_handmode->setGeometry(QRect(370, 520, 91, 41));
    start_btn_handmode->raise();
    tab_hand_mode_widget->raise();
    close_handmode_menu_btn->raise();
    next_btn_handmode->raise();
    back_btn_handmode->raise();
    frame_output_text = new QFrame(centralWidget);
    frame_output_text->setObjectName(QString::fromUtf8("frame_output_text"));
    frame_output_text->setGeometry(QRect(380, 10, 611, 571));
    frame_output_text->setAutoFillBackground(true);
    frame_output_text->setFrameShape(QFrame::StyledPanel);
    frame_output_text->setFrameShadow(QFrame::Raised);
    gridLayout_16 = new QGridLayout(frame_output_text);
    gridLayout_16->setSpacing(6);
    gridLayout_16->setMargin(11);
    gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
    scrollOutputArea = new QScrollArea(frame_output_text);
    scrollOutputArea->setObjectName(QString::fromUtf8("scrollOutputArea"));
    scrollOutputArea->setWidgetResizable(true);
    scroll_output_info = new QWidget();
    scroll_output_info->setObjectName(QString::fromUtf8("scroll_output_info"));
    scroll_output_info->setGeometry(QRect(0, 0, 581, 473));
    gridLayout_11 = new QGridLayout(scroll_output_info);
    gridLayout_11->setSpacing(6);
    gridLayout_11->setMargin(11);
    gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
    label_outpu_info = new QLabel(scroll_output_info);
    label_outpu_info->setObjectName(QString::fromUtf8("label_outpu_info"));
    QFont font3;
    font3.setPointSize(10);
    label_outpu_info->setFont(font3);
    label_outpu_info->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

    gridLayout_11->addWidget(label_outpu_info, 1, 0, 1, 1);

    scrollOutputArea->setWidget(scroll_output_info);

    gridLayout_16->addWidget(scrollOutputArea, 0, 0, 1, 1);

    progressBar = new QProgressBar(frame_output_text);
    progressBar->setObjectName(QString::fromUtf8("progressBar"));
    progressBar->setValue(24);

    gridLayout_16->addWidget(progressBar, 1, 0, 1, 1);

    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setSpacing(6);
    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
    horizontalLayout->setContentsMargins(260, -1, 0, 0);
    cancel_btn = new QPushButton(frame_output_text);
    cancel_btn->setObjectName(QString::fromUtf8("cancel_btn"));

    horizontalLayout->addWidget(cancel_btn);

    finish_btn = new QPushButton(frame_output_text);
    finish_btn->setObjectName(QString::fromUtf8("finish_btn"));

    horizontalLayout->addWidget(finish_btn);


    gridLayout_16->addLayout(horizontalLayout, 2, 0, 2, 1);

    BlackLine->setCentralWidget(centralWidget);
    label_background->raise();
    autoModeBtn->raise();
    handModeBtn->raise();
    frame_output_text->raise();
    frame_automode_menu->raise();
    frame_handmode_menu->raise();
    label_folder_path->raise();
    QWidget::setTabOrder(start_btn_automode, ram_checkbox_automode);
    QWidget::setTabOrder(ram_checkbox_automode, close_automode_menu_btn);
    QWidget::setTabOrder(close_automode_menu_btn, handModeBtn);
    QWidget::setTabOrder(handModeBtn, next_btn_automode);
    QWidget::setTabOrder(next_btn_automode, back_btn_automode);

    retranslateUi(BlackLine);

    tab_hand_mode_widget->setCurrentIndex(4);


    QMetaObject::connectSlotsByName(BlackLine);
    } // setupUi

    void retranslateUi(QMainWindow *BlackLine)
    {
    BlackLine->setWindowTitle(QApplication::translate("BlackLine", "BlackLine", 0, QApplication::UnicodeUTF8));
    label_background->setText(QString());

#ifndef QT_NO_TOOLTIP
    autoModeBtn->setToolTip(QApplication::translate("BlackLine", "Thu th\341\272\255p c\303\241c th\303\264ng tin v\341\273\201 h\341\272\241 t\341\272\247ng m\341\272\241ng, ram, ........\n"
"Th\341\273\235i gian trung b\303\254nh kho\341\272\243ng 20p c\303\263 th\341\273\203 l\303\242u h\306\241n t\303\271y h\341\273\207 th\341\273\221ng", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    autoModeBtn->setText(QApplication::translate("BlackLine", "Thu th\341\272\255p t\341\273\261 \304\221\341\273\231ng", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    handModeBtn->setToolTip(QApplication::translate("BlackLine", "T\341\273\261 l\341\273\261a ch\341\273\215n c\303\241c th\303\264ng tin c\341\272\247n thu th\341\272\255p", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    handModeBtn->setText(QApplication::translate("BlackLine", "Thu th\341\272\255p th\341\273\247 c\303\264ng", 0, QApplication::UnicodeUTF8));
    next_btn_automode->setText(QApplication::translate("BlackLine", "Ti\341\272\277p theo >>", 0, QApplication::UnicodeUTF8));
    ram_checkbox_automode->setText(QApplication::translate("BlackLine", "Sao l\306\260u b\341\273\231 nh\341\273\233 RAM", 0, QApplication::UnicodeUTF8));
    close_automode_menu_btn->setText(QApplication::translate("BlackLine", "x", 0, QApplication::UnicodeUTF8));
    back_btn_automode->setText(QApplication::translate("BlackLine", "<< Quay l\341\272\241i", 0, QApplication::UnicodeUTF8));
    start_btn_automode->setText(QApplication::translate("BlackLine", "B\341\272\257t \304\221\341\272\247u thu th\341\272\255p", 0, QApplication::UnicodeUTF8));
    textBrowser->setHtml(QApplication::translate("BlackLine", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Ch\341\272\277 \304\221\341\273\231 n\303\240y s\341\272\275 thu th\341\272\255p c\303\241c th\303\264ng tin sau:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">+</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">+</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left"
        ":0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">+</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">+</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_folder_path->setText(QString());
    memory_ProcessListing_group->setTitle(QApplication::translate("BlackLine", "Process Listing", 0, QApplication::UnicodeUTF8));
    checkBox_2->setText(QApplication::translate("BlackLine", "Handles", 0, QApplication::UnicodeUTF8));
    checkBox_3->setText(QApplication::translate("BlackLine", "Sections", 0, QApplication::UnicodeUTF8));
    checkBox_4->setText(QApplication::translate("BlackLine", "Imports", 0, QApplication::UnicodeUTF8));
    checkBox_5->setText(QApplication::translate("BlackLine", "Exports", 0, QApplication::UnicodeUTF8));
    checkBox_6->setText(QApplication::translate("BlackLine", "MD5", 0, QApplication::UnicodeUTF8));
    checkBox_7->setText(QApplication::translate("BlackLine", "SHA256", 0, QApplication::UnicodeUTF8));
    checkBox_38->setText(QApplication::translate("BlackLine", "Ports", 0, QApplication::UnicodeUTF8));
    checkBox_45->setText(QApplication::translate("BlackLine", "Strings", 0, QApplication::UnicodeUTF8));
    checkBox_40->setText(QApplication::translate("BlackLine", "Verify Digital Signatures", 0, QApplication::UnicodeUTF8));
    checkBox_39->setText(QApplication::translate("BlackLine", "Exports", 0, QApplication::UnicodeUTF8));
    checkBox_32->setText(QApplication::translate("BlackLine", "MD5", 0, QApplication::UnicodeUTF8));
    checkBox_34->setText(QApplication::translate("BlackLine", "SHA256", 0, QApplication::UnicodeUTF8));
    memory_DriversEnumeration_group->setTitle(QApplication::translate("BlackLine", "Drivers Enumeration", 0, QApplication::UnicodeUTF8));
    checkBox_15->setText(QApplication::translate("BlackLine", "Imports", 0, QApplication::UnicodeUTF8));
    checkBox_10->setText(QApplication::translate("BlackLine", "Exports", 0, QApplication::UnicodeUTF8));
    checkBox_12->setText(QApplication::translate("BlackLine", "MD5", 0, QApplication::UnicodeUTF8));
    checkBox_14->setText(QApplication::translate("BlackLine", "SHA256", 0, QApplication::UnicodeUTF8));
    checkBox_9->setText(QApplication::translate("BlackLine", "Verifi Digital Signatures", 0, QApplication::UnicodeUTF8));
    checkBox_11->setText(QApplication::translate("BlackLine", "Strings", 0, QApplication::UnicodeUTF8));
    checkBox_13->setText(QApplication::translate("BlackLine", "SHA1", 0, QApplication::UnicodeUTF8));
    checkBox_16->setText(QApplication::translate("BlackLine", "Sao l\306\260u b\341\273\231 nh\341\273\233 Ram", 0, QApplication::UnicodeUTF8));
    memory_HookDetection->setTitle(QApplication::translate("BlackLine", "Hook Detection", 0, QApplication::UnicodeUTF8));
    checkBox_96->setText(QApplication::translate("BlackLine", "IDT", 0, QApplication::UnicodeUTF8));
    checkBox_98->setText(QApplication::translate("BlackLine", "SSDT Inline", 0, QApplication::UnicodeUTF8));
    checkBox_97->setText(QApplication::translate("BlackLine", "Verifi Digital Signatures", 0, QApplication::UnicodeUTF8));
    checkBox_99->setText(QApplication::translate("BlackLine", "SSDT Index", 0, QApplication::UnicodeUTF8));
    checkBox_89->setText(QApplication::translate("BlackLine", "Drivers", 0, QApplication::UnicodeUTF8));
    tab_hand_mode_widget->setTabText(tab_hand_mode_widget->indexOf(tab_memory), QApplication::translate("BlackLine", "Memory", 0, QApplication::UnicodeUTF8));
    system_SystemInfomation_group->setTitle(QApplication::translate("BlackLine", "System Infomation", 0, QApplication::UnicodeUTF8));
    checkBox_41->setText(QApplication::translate("BlackLine", "Machinde and OS Infomation", 0, QApplication::UnicodeUTF8));
    checkBox_44->setText(QApplication::translate("BlackLine", "Analyze System Restore Points", 0, QApplication::UnicodeUTF8));
    checkBox_43->setText(QApplication::translate("BlackLine", "Registry Hive Enumeration", 0, QApplication::UnicodeUTF8));
    checkBox_37->setText(QApplication::translate("BlackLine", "User Accounts", 0, QApplication::UnicodeUTF8));
    checkBox_36->setText(QApplication::translate("BlackLine", "Analyze Prefetch", 0, QApplication::UnicodeUTF8));
    system_EventLogs_group->setText(QApplication::translate("BlackLine", "Event Logs", 0, QApplication::UnicodeUTF8));
    system_RegistryEnumeration_group->setText(QApplication::translate("BlackLine", "Registry Enumeration", 0, QApplication::UnicodeUTF8));
    tab_hand_mode_widget->setTabText(tab_hand_mode_widget->indexOf(tab_system), QApplication::translate("BlackLine", "System", 0, QApplication::UnicodeUTF8));
    checkBox->setText(QApplication::translate("BlackLine", "Port Enumeration", 0, QApplication::UnicodeUTF8));
    checkBox_8->setText(QApplication::translate("BlackLine", "DNS Tables", 0, QApplication::UnicodeUTF8));
    checkBox_23->setText(QApplication::translate("BlackLine", "ARP Tables", 0, QApplication::UnicodeUTF8));
    checkBox_33->setText(QApplication::translate("BlackLine", "Routing Tables", 0, QApplication::UnicodeUTF8));
    network_BrowserHistory_group->setTitle(QApplication::translate("BlackLine", "Browser History", 0, QApplication::UnicodeUTF8));
    checkBox_35->setText(QApplication::translate("BlackLine", "Cookies", 0, QApplication::UnicodeUTF8));
    checkBox_42->setText(QApplication::translate("BlackLine", "Form History", 0, QApplication::UnicodeUTF8));
    checkBox_47->setText(QApplication::translate("BlackLine", "Thumbnails (Firefox Only)", 0, QApplication::UnicodeUTF8));
    checkBox_48->setText(QApplication::translate("BlackLine", "File Downloads", 0, QApplication::UnicodeUTF8));
    checkBox_49->setText(QApplication::translate("BlackLine", "URL History", 0, QApplication::UnicodeUTF8));
    checkBox_50->setText(QApplication::translate("BlackLine", "Indexed Page Content (Firefox Only)", 0, QApplication::UnicodeUTF8));
    tab_hand_mode_widget->setTabText(tab_hand_mode_widget->indexOf(tab_network), QApplication::translate("BlackLine", "Network", 0, QApplication::UnicodeUTF8));
    disk_FileEnumeration_group->setTitle(QApplication::translate("BlackLine", "File Enumeration", 0, QApplication::UnicodeUTF8));
    checkBox_51->setText(QApplication::translate("BlackLine", "Include Active Files (Raw Only)", 0, QApplication::UnicodeUTF8));
    checkBox_52->setText(QApplication::translate("BlackLine", "Parse NTFS INDX Buffers (Raw Only)", 0, QApplication::UnicodeUTF8));
    checkBox_53->setText(QApplication::translate("BlackLine", "Analyze Entropy", 0, QApplication::UnicodeUTF8));
    checkBox_54->setText(QApplication::translate("BlackLine", "Enumerate Imports", 0, QApplication::UnicodeUTF8));
    checkBox_59->setText(QApplication::translate("BlackLine", "Verify Digital Signatures", 0, QApplication::UnicodeUTF8));
    checkBox_62->setText(QApplication::translate("BlackLine", "Include Directories", 0, QApplication::UnicodeUTF8));
    checkBox_61->setText(QApplication::translate("BlackLine", "Get Resources", 0, QApplication::UnicodeUTF8));
    checkBox_60->setText(QApplication::translate("BlackLine", "MD5", 0, QApplication::UnicodeUTF8));
    checkBox_63->setText(QApplication::translate("BlackLine", "SHA256", 0, QApplication::UnicodeUTF8));
    checkBox_66->setText(QApplication::translate("BlackLine", "Include Deleted Files (Raw Only)", 0, QApplication::UnicodeUTF8));
    checkBox_65->setText(QApplication::translate("BlackLine", "Analyze File Anomalies", 0, QApplication::UnicodeUTF8));
    checkBox_64->setText(QApplication::translate("BlackLine", "Enumerate Exports", 0, QApplication::UnicodeUTF8));
    checkBox_67->setText(QApplication::translate("BlackLine", "Strings", 0, QApplication::UnicodeUTF8));
    checkBox_70->setText(QApplication::translate("BlackLine", "Include Files", 0, QApplication::UnicodeUTF8));
    checkBox_69->setText(QApplication::translate("BlackLine", "Get Version Info", 0, QApplication::UnicodeUTF8));
    checkBox_68->setText(QApplication::translate("BlackLine", "SHA1", 0, QApplication::UnicodeUTF8));
    disk_DiskEnumeration_group->setTitle(QApplication::translate("BlackLine", "Disk Enumeration", 0, QApplication::UnicodeUTF8));
    checkBox_71->setText(QApplication::translate("BlackLine", "Disks", 0, QApplication::UnicodeUTF8));
    checkBox_72->setText(QApplication::translate("BlackLine", "Volumes", 0, QApplication::UnicodeUTF8));
    tab_hand_mode_widget->setTabText(tab_hand_mode_widget->indexOf(tab_disk), QApplication::translate("BlackLine", "Disk", 0, QApplication::UnicodeUTF8));
    other_Services_group->setTitle(QApplication::translate("BlackLine", "Services", 0, QApplication::UnicodeUTF8));
    checkBox_73->setText(QApplication::translate("BlackLine", "MD5", 0, QApplication::UnicodeUTF8));
    checkBox_75->setText(QApplication::translate("BlackLine", "SHA256", 0, QApplication::UnicodeUTF8));
    checkBox_76->setText(QApplication::translate("BlackLine", "SHA1", 0, QApplication::UnicodeUTF8));
    checkBox_74->setText(QApplication::translate("BlackLine", "Verify Digital Signatures", 0, QApplication::UnicodeUTF8));
    other_Tasks_group->setTitle(QApplication::translate("BlackLine", "Tasks", 0, QApplication::UnicodeUTF8));
    checkBox_78->setText(QApplication::translate("BlackLine", "MD5", 0, QApplication::UnicodeUTF8));
    checkBox_79->setText(QApplication::translate("BlackLine", "SHA256", 0, QApplication::UnicodeUTF8));
    checkBox_77->setText(QApplication::translate("BlackLine", "SHA1", 0, QApplication::UnicodeUTF8));
    checkBox_80->setText(QApplication::translate("BlackLine", "Verify Digital Signatures", 0, QApplication::UnicodeUTF8));
    other_CommonPersistenceMechanisms_group->setTitle(QApplication::translate("BlackLine", "Common Persistence Mechanisms", 0, QApplication::UnicodeUTF8));
    checkBox_82->setText(QApplication::translate("BlackLine", "Analyze Entropy", 0, QApplication::UnicodeUTF8));
    checkBox_81->setText(QApplication::translate("BlackLine", "Enumerate Imports", 0, QApplication::UnicodeUTF8));
    checkBox_88->setText(QApplication::translate("BlackLine", "MD5", 0, QApplication::UnicodeUTF8));
    checkBox_85->setText(QApplication::translate("BlackLine", "SHA256", 0, QApplication::UnicodeUTF8));
    checkBox_83->setText(QApplication::translate("BlackLine", "Enumerate Exports", 0, QApplication::UnicodeUTF8));
    checkBox_86->setText(QApplication::translate("BlackLine", "Analyze File Anomalies", 0, QApplication::UnicodeUTF8));
    checkBox_87->setText(QApplication::translate("BlackLine", "Get VersionInfo", 0, QApplication::UnicodeUTF8));
    checkBox_84->setText(QApplication::translate("BlackLine", "SHA1", 0, QApplication::UnicodeUTF8));
    tab_hand_mode_widget->setTabText(tab_hand_mode_widget->indexOf(tab_other), QApplication::translate("BlackLine", "Other", 0, QApplication::UnicodeUTF8));
    close_handmode_menu_btn->setText(QApplication::translate("BlackLine", "x", 0, QApplication::UnicodeUTF8));
    next_btn_handmode->setText(QApplication::translate("BlackLine", "Ti\341\272\277p theo >>", 0, QApplication::UnicodeUTF8));
    start_btn_handmode->setText(QApplication::translate("BlackLine", "B\341\272\257t \304\221\341\272\247u thu th\341\272\255p", 0, QApplication::UnicodeUTF8));
    back_btn_handmode->setText(QApplication::translate("BlackLine", "<< Quay l\341\272\241i", 0, QApplication::UnicodeUTF8));
    label_outpu_info->setText(QString());
    cancel_btn->setText(QApplication::translate("BlackLine", "H\341\273\247y", 0, QApplication::UnicodeUTF8));
    finish_btn->setText(QApplication::translate("BlackLine", "Ho\303\240n t\341\272\245t", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(BlackLine);
    } // retranslateUi

};

namespace Ui {
    class BlackLine: public Ui_BlackLine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLACKLINE_H
