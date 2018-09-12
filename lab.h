#pragma once
#include <cmath>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class lab
{
public:
  //void init(int N, double **A, double *b, double *x);
  void read_file();
  void run(int lab_number);
  void write_result();
  void check_result();
  virtual ~lab();
protected:
  int N;
  double **A = NULL, *b = NULL, *x = NULL;
  double **A_or = NULL, *b_or = NULL;

  virtual std::string get_name();


  /**
   * ����� ������
   */
  virtual void lab1() = 0;
  /**
   * ����� ������ � ������� �������� ��������
   */
  virtual void lab2() = 0;
  /**
   * ����� ����������� ����� (����� ���������)
   */
  virtual void lab3() = 0;
  /**
   * ����� ��������
   */
  virtual void lab4() = 0;
  /**
   * ����� �����
   */
  virtual void lab5() = 0;
  /**
   * ����� �������
   */
  virtual void lab6() = 0;
  /**
   * ���� �� ����������� �������
   */
   virtual void lab7() = 0;
   virtual void lab8() = 0;
   virtual void lab9() = 0;
};
