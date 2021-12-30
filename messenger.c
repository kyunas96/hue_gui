#ifndef MESSAGE_C
#define MESSAGE_C

#include <curl/curl.h>
#include <stdio.h>
#include "utilities/header_parser.c"

int messenger(){
  CURL *curl = curl_easy_init();
  if(curl){
    CURLcode res;
    curl_easy_setopt(curl, CURLOPT_URL, "https://www.google.com");
    res = curl_easy_perform(curl);
    printf("Status code: %d", res);
    curl_easy_cleanup(curl);
  }
  return 10;
}

#endif