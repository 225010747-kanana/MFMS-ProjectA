#ifndef ASSETS_H
#define ASSETS_H

void addAsset(char ids[][50], char names[][50], char types[][50], char departments[][50], double values[], int conditions[], int *count);
void displayAssets(char ids[][50], char names[][50], char types[][50], char departments[][50], double values[], int conditions[], int count);
void assetCondition(int condition, char text[]);
void assetMenu(void);

#endif