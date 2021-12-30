#ifndef DNS_LOOKUP_C
#define DNS_LOOKUP_C

#include <curl/curl.h>

void dns_lookup(){
  const char *IP_ADDRESS = " 192.168.1.141";
  CURL *curl = curl_easy_init();
  CURLcode *res;
  curl_easy_setopt(curl, CURLOPT_DNS_LOCAL_IP4, IP_ADDRESS);
  res = curl_easy_perform(curl);
}

#endif