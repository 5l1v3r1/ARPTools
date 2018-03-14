#ifndef ARPTOOLS_MYDNS_HPP
#define ARPTOOLS_MYDNS_HPP

#include "myarpt.hpp"

struct dnsHeader {
  byte transID[2];
  byte flags[2];
  byte questions[2];
  byte resource[2];
  byte authority[2];
  byte addtional[2];
};
struct dnsQuery {
  byte* name;
  byte type[2];
  byte Class[2];
};
struct answer{
  byte pointer[2];
  byte type[2];
  byte Class[2];
  byte TimeToLive[4];
  byte dataLen[2];
  byte addr[4];
};
void DNSRequest();
void DNSAnswerParser(byte* buf);
bytestr addrToDnsFormat();

#endif
