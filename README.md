# Qt_Calcultor
用Qt实现简单的加减乘除运算器
# Widget计算器介绍

该程序是一个简单的计算器小部件，使用C++和Qt库编写。以下是对程序中各部分的简要介绍：

## 概述

Widget是一个继承自QWidget的自定义小部件，用于实现计算器的基本功能。

## 用户界面

使用Ui_Widget类来管理程序的用户界面。用户界面包括以下元素：

- 一个QLineEdit小部件（名为lineEdit），用于显示和输入数字和计算结果。
- 十个QPushButton按钮（分别命名为pushButton_0至pushButton_9），用于输入数字0到9。
- 其他几个QPushButton按钮（命名为pushButton_add、pushButton_equit、pushButton_Sub、pushButton_Mult、pushButton_divi和pushButton_clear），用于执行加法、等于、减法、乘法、除法和清除操作。

## 主要功能

### 数字输入

当用户点击数字按钮（pushButton_0至pushButton_9）时，程序将在lineEdit小部件中显示相应的数字。

### 加法、减法、乘法和除法

当用户点击加法（pushButton_add）、减法（pushButton_Sub）、乘法（pushButton_Mult）和除法（pushButton_divi）按钮时，程序将执行相应的操作。它会将当前输入的数字存储在变量`a`中，然后将操作符（"+"、"-"、"*"、"/"）存储在变量`b`中。同时，lineEdit小部件将被清空，以便用户输入下一个数字。

### 等于

当用户点击等于按钮（pushButton_equit）时，程序将计算之前输入数字和操作符的结果，并将结果显示在lineEdit小部件中。如果之前未输入数字或操作符，则仅将当前输入的数字存储在变量`b`中。

### 清除

当用户点击清除按钮（pushButton_clear）时，程序将清空所有存储的数字和操作符，并将lineEdit小部件重置为初始状态（显示0）。

这是该计算器小部件的基本功能和用法。你可以根据自己的需求对其进行扩展和定制化。
