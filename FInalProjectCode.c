
#include <stdio.h>
#include <math.h>
#include <curl/curl.h>
#include <json-c/json.h>
#pragma warning(disable:4996)

// Celcius to Fahrenheit

void CtoF(double celcius) {
  double fahrenheit = (celcius * 9 / 5) + 32;
  printf("\n You have entered %lf degrees of Celcius.\n That is equivalent to "
         "%.2lf degrees of Fahrenheit.",
         celcius, fahrenheit);
}

// Fahrenheit to Celcius

void FtoC(double fahrenheit) {
  double celcius = (fahrenheit - 32) * 5 / 9;
  printf("\nYou have entered %lf degrees of Fahrenheit. \n That is equivalent "
         "to %.2lf degrees of Celcius.",
         fahrenheit, celcius);
}

// Miles to Km
void miToKm(double miles) {
  double km = miles * 1.60934;
  printf("\nYou have entered %lf miles\nThat is equivalent to %.2lf kilometers",
         miles, km);
}
// Km to Miles
void kmToMi(double km) {
  double miles = km * 0.621371;
  printf("\nYou have entered %lf kilometers\nThat is equivalent to %.2lf miles",
         km, miles);
}

// feet to meters
void fToM(double feet) {
  double m = feet * 0.3048;
  printf("\nYou have entered %lf feet\nThat is equivalent to %.2lf meters",
         feet, m);
}
// meters to feet
void mToF(double m) {
  double feet = m * 3.28084;
  printf("\nYou have entered %lf meters\nThat is equivalent to %.2lf feet", m,
         feet);
}
// inches to centimeters
void inToCm(double in) {
  double cm = in * 2.54;
  printf(
      "\nYou have entered %lf inches\nThat is equivalent to %.2lf centimeters",
      in, cm);
}
// centimeters to inches
void cmToIn(double cm) {
  double in = cm * 0.393701;
  printf(
      "\nYou have entered %lf centimeters\nThat is equivalent to %.2lf inches",
      cm, in);
}

// kilograms to pounds
void KgToLb(double kg) {
  double lb = kg * 2.20462;
  printf("\n You have entered %lf kilograms. \n That is equivalent to %.2lf "
         "pounds.",
         kg, lb);
}

// pounds to kilograms
void LbToKg(double lb) {
  double kg = lb / 2.20462;
  printf("\n You have entered %lf pounds. \n That is equivalent to %.2lf "
         "kilograms.",
         lb, kg);
}
// milliliters to ounces
void milToOz(double ml) {
  double floz = (ml / 29.574);
  printf("You have entered %lf milliliters\nThat is equivalent to %.2lf fluid "
         "ounces",
         ml, floz);
}
// ounces to mililiters
void ozToMil(double floz) {
  double ml = (floz * .0338);
  printf("You hae entered %lf fluid ounces\nThat is equivalent to %.2lf "
         "milliliters",
         floz, ml);
}
// mph to km/h
void mphToKMH(double mph) {
  double kmh = (mph * 1.60934);
  printf("You have entered %lf miles per hour\nThat is equilavent to %.2lf "
         "kilometers per hour",
         mph, kmh);
}
// km/h to mph
void kmhToMPH(double kmh) {
  double mph = (kmh / 0.621371);
  printf("You have entered %lf kilometers per hour\nThat is equilavent to "
         "%.2lf miles per hour",
         kmh, mph);
}

int main() {
  CURL* curl;
  CURLcode res;
  int num = 0;
  curl = curl_easy_init();
  int choice1, choice2, choice3, choice4, choice5;
  printf(
      "Welcome to our project!\nHere you will be presented with a number of "
      "options to convert basic units of measurement, mostly between metric "
      "and imperial\nIf you would like to work with Metric to Imperial, enter "
      "1.\nIf you would like to work with Imperial to Metric, enter 2\nIf you would like to compare currencies to USD enter 3.\n");
  scanf("%d", &choice1);
  if (choice1 == 1) {
    printf("Metric to Imperial\nChoose a conversion:\n1: Celsius to "
           "Farenheit\n2: Km to Mi\n3: Meters to Feet\n4: Cm to In\n5: Kg to "
           "lb\n6: Km/h to mph\n7: Milliliters to ounces");
    scanf("%d", &choice2);
    if (choice2 == 1) {
      printf("Enter a value for Celsius: ");
      double c;
      scanf("%lf", &c);
      CtoF(c);
    } else if (choice2 == 2) {
      printf("Enter a value for Km: ");
      double km;
      scanf("%lf", &km);
      kmToMi(km);
    } else if (choice2 == 3) {
      printf("Enter a value for meters: ");
      double m;
      scanf("%lf", &m);
      mToF(m);
    } else if (choice2 == 4) {
      printf("Enter a value for cm: ");
      double cm;
      scanf("%lf", &cm);
      cmToIn(cm);
    } else if (choice2 == 5) {
      printf("Enter a value for kg: ");
      double kg;
      scanf("%lf", &kg);
      KgToLb(kg);
    } else if (choice2 == 6) {
      printf("Enter a value for km/h: ");
      double kmh;
      scanf("%lf", &kmh);
      kmhToMPH(kmh);
    } else if (choice2 == 7) {
      printf("Enter a value for milliliters: ");
      double ml;
      scanf("%lf", &ml);
      milToOz(ml);
    } else if (choice2 > 7 || choice2 < 1) {
      printf("invalid input. Try again");
      main();
    }
  } else if (choice1 == 2) {
    printf("Imperial to Metric\nChoose a conversion:\n1: Farenheit to "
           "Celsius\n2: Mi to Km\n3: Feet to Meters\n4: In to Cm\n5: lb to "
           "kg\n6: Mph to Km/h\n7. Ounces to Milliliters");
    scanf("%d", &choice3);
    if (choice3 == 1) {
      printf("Enter a value for farenheit");
      double f;
      scanf("%lf", &f);
      FtoC(f);
    } else if (choice3 == 2) {
      printf("enter a value for Miles");
      double mi;
      scanf("%lf", &mi);
      miToKm(mi);
    } else if (choice3 == 3) {
      printf("Enter a value for Feet");
      double ft;
      scanf("%lf", &ft);
      fToM(ft);
    } else if (choice3 == 4) {
      printf("Enter a value for Inches");
      double in;
      scanf("%lf", &in);
      inToCm(in);
    } else if (choice3 == 5) {
      printf("Enter a value for pounds: ");
      double lb;
      scanf("%lf", &lb);
      LbToKg(lb);
    } else if (choice3 == 6) {
      printf("Enter a value for mph: ");
      double mph;
      scanf("%lf", &mph);
      mphToKMH(mph);
    } else if (choice3 == 7) {
      printf("Enter a value for fluid ounces: ");
      double floz;
      scanf("%lf", &floz);
      ozToMil(floz);
    } else if (choice3 > 7 || choice3 < 1) {
      printf("\nInvalid entry. Please try again");
      main();
    }
  } else if (choice1 == 3) {
      printf("If you would like to compare USD to YEN press 1.\nIf you would like to compare USD to Euro press 2.\nIf you would like to compare USD to GBP press 3.\n");
      scanf("%d", &choice4);
      if (choice4 == 1){
        printf("If you would like to see $10 comparison press 1.\nIf you would like to see $100 comparison press 2.\nIf you would like to see $1000 comparison press 3.\n");
        scanf("%d", &choice5);
        if (choice5 == 1){
          if (curl) {
            curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "GET");
            curl_easy_setopt(curl, CURLOPT_URL, "https://api.apilayer.com/exchangerates_data/convert?to=YEN&from=USD&amount=10");
            curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
            curl_easy_setopt(curl, CURLOPT_DEFAULT_PROTOCOL, "https");
            struct curl_slist* headers = NULL;
            headers = curl_slist_append(headers, "apikey: 4fFU2VqvFluoILj9vvFDK2duDUuTDkeu");
            curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

            res = curl_easy_perform(curl);
          }
          curl_easy_cleanup(curl);
        }
        if (choice5 == 2){
          if (curl) {
            curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "GET");
            curl_easy_setopt(curl, CURLOPT_URL, "https://api.apilayer.com/exchangerates_data/convert?to=YEN&from=USD&amount=100");
            curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
            curl_easy_setopt(curl, CURLOPT_DEFAULT_PROTOCOL, "https");
            struct curl_slist* headers = NULL;
            headers = curl_slist_append(headers, "apikey: 4fFU2VqvFluoILj9vvFDK2duDUuTDkeu");
            curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

            res = curl_easy_perform(curl);
          }
          curl_easy_cleanup(curl);
        }
        if (choice5 == 3){
          if (curl) {
            curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "GET");
            curl_easy_setopt(curl, CURLOPT_URL, "https://api.apilayer.com/exchangerates_data/convert?to=YEN&from=USD&amount=1000");
            curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
            curl_easy_setopt(curl, CURLOPT_DEFAULT_PROTOCOL, "https");
            struct curl_slist* headers = NULL;
            headers = curl_slist_append(headers, "apikey: 4fFU2VqvFluoILj9vvFDK2duDUuTDkeu");
            curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

            res = curl_easy_perform(curl);
          }
          curl_easy_cleanup(curl);
        }
      }
      else if (choice4 == 2){
        printf("If you would like to see $10 comparison press 1.\nIf you would like to see $100 comparison press 2.\nIf you would like to see $1000 comparison press 3.\n");
        scanf("%d", &choice5); 
        if (choice5 == 1){
          if (curl) {
            curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "GET");
            curl_easy_setopt(curl, CURLOPT_URL, "https://api.apilayer.com/exchangerates_data/convert?to=EUR&from=USD&amount=10");
            curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
            curl_easy_setopt(curl, CURLOPT_DEFAULT_PROTOCOL, "https");
            struct curl_slist* headers = NULL;
            headers = curl_slist_append(headers, "apikey: 4fFU2VqvFluoILj9vvFDK2duDUuTDkeu");
            curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

            res = curl_easy_perform(curl);
          }
          curl_easy_cleanup(curl);
        }
        if (choice5 == 2){
          if (curl) {
            curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "GET");
            curl_easy_setopt(curl, CURLOPT_URL, "https://api.apilayer.com/exchangerates_data/convert?to=EUR&from=USD&amount=100");
            curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
            curl_easy_setopt(curl, CURLOPT_DEFAULT_PROTOCOL, "https");
            struct curl_slist* headers = NULL;
            headers = curl_slist_append(headers, "apikey: 4fFU2VqvFluoILj9vvFDK2duDUuTDkeu");
            curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

            res = curl_easy_perform(curl);
          }
          curl_easy_cleanup(curl);
        }
        if (choice5 == 3){
          if (curl) {
            curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "GET");
            curl_easy_setopt(curl, CURLOPT_URL, "https://api.apilayer.com/exchangerates_data/convert?to=EUR&from=USD&amount=1000");
            curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
            curl_easy_setopt(curl, CURLOPT_DEFAULT_PROTOCOL, "https");
            struct curl_slist* headers = NULL;
            headers = curl_slist_append(headers, "apikey: 4fFU2VqvFluoILj9vvFDK2duDUuTDkeu");
            curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

            res = curl_easy_perform(curl);
          }
          curl_easy_cleanup(curl);
        }
      }
      else if (choice4 == 3){
        printf("If you would like to see $10 comparison press 1.\nIf you would like to see $100 comparison press 2.\nIf you would like to see $1000 comparison press 3.\n");
       scanf("%d", &choice5);
       if (choice5 == 1){
          if (curl) {
            curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "GET");
            curl_easy_setopt(curl, CURLOPT_URL, "https://api.apilayer.com/exchangerates_data/convert?to=GBP&from=USD&amount=10");
            curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
            curl_easy_setopt(curl, CURLOPT_DEFAULT_PROTOCOL, "https");
            struct curl_slist* headers = NULL;
            headers = curl_slist_append(headers, "apikey: 4fFU2VqvFluoILj9vvFDK2duDUuTDkeu");
            curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

            res = curl_easy_perform(curl);
          }
          curl_easy_cleanup(curl);
        }
        if (choice5 == 2){
          if (curl) {
            curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "GET");
            curl_easy_setopt(curl, CURLOPT_URL, "https://api.apilayer.com/exchangerates_data/convert?to=GBP&from=USD&amount=100");
            curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
            curl_easy_setopt(curl, CURLOPT_DEFAULT_PROTOCOL, "https");
            struct curl_slist* headers = NULL;
            headers = curl_slist_append(headers, "apikey: 4fFU2VqvFluoILj9vvFDK2duDUuTDkeu");
            curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

            res = curl_easy_perform(curl);
          }
          curl_easy_cleanup(curl);
        }
        if (choice5 == 3){
          if (curl) {
            curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "GET");
            curl_easy_setopt(curl, CURLOPT_URL, "https://api.apilayer.com/exchangerates_data/convert?to=GBP&from=USD&amount=1000");
            curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
            curl_easy_setopt(curl, CURLOPT_DEFAULT_PROTOCOL, "https");
            struct curl_slist* headers = NULL;
            headers = curl_slist_append(headers, "apikey: 4fFU2VqvFluoILj9vvFDK2duDUuTDkeu");
            curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

            res = curl_easy_perform(curl);
          }
          curl_easy_cleanup(curl);
        }
      
    }
  }

  return 0;
}