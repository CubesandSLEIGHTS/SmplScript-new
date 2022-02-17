#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

namespace constant{
  //Constants
  string TT_INT				  = "INT";
  string TT_FLOAT    	  = "FLOAT";
  string TT_STRING			= "STRING";
  string TT_IDENTIFIER	= "IDENTIFIER";
  string TT_KEYWORD		  = "KEYWORD";
  string TT_PLUS     	  = "PLUS";
  string TT_MINUS    	  = "MINUS";
  string TT_MUL      	  = "MUL";
  string TT_DIV      	  = "DIV";
  string TT_POW				  = "POW";
  string TT_EQ					= "EQ";
  string TT_LPAREN   	  = "LPAREN";
  string TT_RPAREN   	  = "RPAREN";
  string TT_LSQUARE     = "LSQUARE";
  string TT_RSQUARE     = "RSQUARE";
  string TT_EE					= "EE";
  string TT_NE					= "NE";
  string TT_LT					= "LT";
  string TT_GT					= "GT";
  string TT_LTE				  = "LTE";
  string TT_GTE				  = "GTE";
  string TT_COMMA			  = "COMMA";
  string TT_ARROW			  = "ARROW";
  string TT_NEWLINE		  = "NEWLINE";
  string TT_EOF				  = "EOF";
  string nums_letters   = "1234567890qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCBNM";
  string nums = "1234567890";
}
namespace kw{
//Keywords
vector<string> keywords = {
  "assign", "and", "or", "not", "if", "elif", "else", "for", "to", "step", "while", "define", "then", "end", "return", "continue", "break"};
}