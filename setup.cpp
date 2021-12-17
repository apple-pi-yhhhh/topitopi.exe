#include <iostream> 
#include <curl/curl.h> 

using namespace std; 
int main() 
{ 
    CURL *image; 
    CURLcode imgresult; 
    FILE *fp = nullptr; 
    const char *url = "##########  [  U  R  L  を  こ  こ  に  ]  ##########";
    image = curl_easy_init(); 
    if (image) 
    { 
     // Open file 
     fp = fopen("img.png", "wb"); 
     if (fp == NULL) cout << "File cannot be opened"; 

     curl_easy_setopt(image, CURLOPT_WRITEFUNCTION, NULL); 
     curl_easy_setopt(image, CURLOPT_WRITEDATA, fp); 
     curl_easy_setopt(image, CURLOPT_URL, url); 
     // Grab image 
     imgresult = curl_easy_perform(image); 
     if (imgresult) 
      cout << "Cannot grab the image!\n"; 
    } 
    // Clean up the resources 
    curl_easy_cleanup(image); 
    // Close the file 
    fclose(fp); 
    system("pause"); 
    return 0; 
} 
