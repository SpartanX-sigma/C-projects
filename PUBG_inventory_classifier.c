#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char ans[10];
    char type;
    char gunA[20];
    char gunB[20];
    char gunC[20];
    char gunD[20];
    char gunE[20];

    while (1)
    {

        printf("\nHello Ranger\nI am Jarvis.\nAre you ready to select your inventory?? ");
        fflush(stdout);
        scanf("%9s", ans);

        if (strcmp(ans, "yes") == 0)
        {

            printf("Choose the gun type: \n");
            printf("a) Assault Rifle \n");
            printf("b) Designated Marksman Rifle \n");
            printf("c) Sub Machine Gun \n");
            printf("d) Sniper \n");
            printf("e) Shotgun \n");
            fflush(stdout);
            scanf(" %c", &type);

            switch (type)
            {
            case 'a':

                printf("Choose your gun: \n");
                printf("1. M416 \n");
                printf("2. AKM \n");
                printf("3. M16A4 \n");
                printf("4. ScarL \n");
                printf("5. QBZ \n");
                printf("6. AUG \n");
                printf("7. Groza \n");
                printf("8. M762 \n");
                fflush(stdout);
                scanf("%s", gunA);

                if (strcmp(gunA, "M416") == 0)
                {
                    printf("It is a 5.56 ammo, mid range weapon\n");
                    printf("Possible combinations: \n");
                    printf("1. M4 + AKM / M762 / Groza /-- for short to mid range \n");
                    printf("2. M4 + DMR / Sniper (all types) \n ");
                    printf("3. M4 + Any SMG \n ");
                    printf("4. M4 + Shotgun \n");
                    printf("5. M4 + Grenade Launcher \n");
                }
                else if (strcmp(gunA, "AKM") == 0)
                {
                    printf("You have selected AKM\n");
                    printf("Possible combinations: \n");
                    printf("1. AKM + M416 or any 5.56 /-- for short to mid range \n");
                    printf("2. AKM + DMR (all types) \n ");
                    printf("3. AKM + Any SMG \n ");
                    printf("4. AKM + Shotgun( preferrably S12K) \n");
                }
                else if (strcmp(gunA, "M16A4") == 0)
                {
                    printf("You have selected M16A4\n");
                    printf("Possible combinations: \n");
                    printf("1. M16A4 + AKM / M762 / Groza /-- for short to mid range \n");
                    printf("2. M16A4 + DMR / Sniper (all types) \n ");
                    printf("3. M16A4 + Any SMG \n ");
                }
                else if (strcmp(gunA, "ScarL") == 0)
                {
                    printf("You have selected ScarL\n");
                    printf("Possible combinations: \n");
                    printf("1. ScarL + AKM / M762 / Groza /-- for short to mid range \n");
                    printf("2. ScarL + DMR / Sniper (all types) \n ");
                    printf("3. ScarL + Any SMG \n ");
                }
                else if (strcmp(gunA, "QBZ") == 0)
                {
                    printf("You have selected QBZ\n");
                    printf("Possible combinations: \n");
                    printf("1. QBZ + AKM / M762 / Groza /-- for short to mid range \n");
                    printf("2. QBZ + DMR / Sniper (all types) \n ");
                    printf("3. QBZ + Any SMG \n ");
                }
                else if (strcmp(gunA, "AUG") == 0)
                {
                    printf("You have selected AUG\n");
                    printf("Possible combinations: \n");
                    printf("1. AUG + AKM / M762 / Groza /-- for short to mid range \n");
                    printf("2. AUG + DMR / Sniper (all types) \n ");
                    printf("3. AUG + Any SMG \n ");
                }
                else if (strcmp(gunA, "Groza") == 0)
                {
                    printf("You have selected Groza\n");
                    printf("Possible combinations: \n");
                    printf("1. Groza + M416 or any 5.56 (avoid 7.62) \n");
                    printf("2. Groza + DMR (all types) \n ");
                    printf("3. Groza + Any SMG (SMG for mid range)\n ");
                }
                else if (strcmp(gunA, "M762") == 0)
                {
                    printf("You have selected M762\n");
                    printf("Possible combinations: \n");
                    printf("1. M762 + M416 or any 5.56 (avoid 7.62) \n");
                    printf("2. M762 + DMR (all types) \n ");
                    printf("3. M762 + Any SMG (for mid range)\n ");
                }
                else
                {
                    printf("Invalid gun selection\n");
                    continue;
                }

                break;

            case 'b':

                printf("You have selected Designated Marksman Rifle\n");
                printf("Choose your gun: \n");
                printf("1. Mini14 \n");
                printf("2. SKS \n");
                printf("3. SLR \n");
                printf("4. VSS \n");
                printf("5. MK14 \n");
                printf("6. QBU \n");
                fflush(stdout);
                scanf("%s", gunB);

                if (strcmp(gunB, "Mini14") == 0)
                {
                    printf("You have selected Mini14\n");
                }
                else if (strcmp(gunB, "SKS") == 0)
                {
                    printf("You have selected SKS\n");
                    printf("Versatile 7.62mm DMR, high damage\n");
                    printf("Possible combinations:\n");
                    printf("1. SKS + M416/AKM (for close-mid range)\n");
                    printf("2. SKS + SMG\n");
                    printf("3. SKS + Shotgun\n");
                }
                else if (strcmp(gunB, "SLR") == 0)
                {
                    printf("You have selected SLR\n");
                    printf("High damage, high recoil 7.62mm DMR\n");
                    printf("Possible combinations:\n");
                    printf("1. SLR + M416/ScarL\n");
                    printf("2. SLR + SMG\n");
                    printf("3. SLR + Shotgun\n");
                }
                else if (strcmp(gunB, "VSS") == 0)
                {
                    printf("You have selected VSS\n");
                    printf("Suppressed, subsonic DMR (9mm), built-in scope\n");
                    printf("Possible combinations:\n");
                    printf("1. VSS + AR/SMG for versatility\n");
                    printf("2. VSS + Shotgun for close range\n");
                }
                else if (strcmp(gunB, "MK14") == 0)
                {
                    printf("You have selected MK14\n");
                    printf("DMR with auto mode, crate weapon (7.62mm)\n");
                    printf("Possible combinations:\n");
                    printf("1. MK14 + AR (for close-mid range)\n");
                    printf("2. MK14 + SMG\n");
                }
                else if (strcmp(gunB, "QBU") == 0)
                {
                    printf("You have selected QBU\n");
                    printf("DMR exclusive to Sanhok (5.56mm)\n");
                    printf("Possible combinations:\n");
                    printf("1. QBU + AR\n");
                    printf("2. QBU + SMG\n");
                }
                else
                {
                    printf("Invalid gun selection\n");
                    continue;
                }
                break;

            case 'c':
            {

                printf("You have selected Sub Machine Gun\n");
                printf("Choose your gun: \n");
                printf("1. UMP45 \n");
                printf("2. Vector \n");
                printf("3. TommyGun \n");
                printf("4. MicroUzi \n");
                printf("5. PP19Bizon \n");
                printf("6. MP5K \n");
                printf("7. MP9 \n");
                fflush(stdout);
                scanf("%s", gunC);

                if (strcmp(gunC, "UMP45") == 0)
                {
                    printf("You have selected UMP45\n");
                    printf("Reliable .45 ACP SMG, good for close-mid range\n");
                    printf("Possible combinations:\n");
                    printf("1. UMP45 + AR/DMR for range\n");
                    printf("2. UMP45 + Shotgun for close quarters\n");
                }
                else if (strcmp(gunC, "Vector") == 0)
                {
                    printf("You have selected Vector\n");
                    printf("High fire rate, low mag size, 9mm\n");
                    printf("Possible combinations:\n");
                    printf("1. Vector + AR/DMR\n");
                    printf("2. Vector + Shotgun\n");
                }
                else if (strcmp(gunC, "TommyGun") == 0)
                {
                    printf("You have selected Tommy Gun\n");
                    printf("Large mag, .45 ACP, no scope slot\n");
                    printf("Possible combinations:\n");
                    printf("1. TommyGun + AR/DMR\n");
                    printf("2. TommyGun + Shotgun\n");
                }
                else if (strcmp(gunC, "MicroUzi") == 0)
                {
                    printf("You have selected Micro Uzi\n");
                    printf("Fastest firing SMG, 9mm\n");
                    printf("Possible combinations:\n");
                    printf("1. MicroUzi + AR/DMR\n");
                    printf("2. MicroUzi + Shotgun\n");
                }
                else if (strcmp(gunC, "PP19Bizon") == 0)
                {
                    printf("You have selected PP-19 Bizon\n");
                    printf("Large mag, low damage, 9mm\n");
                    printf("Possible combinations:\n");
                    printf("1. Bizon + AR/DMR\n");
                    printf("2. Bizon + Shotgun\n");
                }
                else if (strcmp(gunC, "MP5K") == 0)
                {
                    printf("You have selected MP5K\n");
                    printf("SMG exclusive to Vikendi, 9mm\n");
                    printf("Possible combinations:\n");
                    printf("1. MP5K + AR/DMR\n");
                    printf("2. MP5K + Shotgun\n");
                }
                else if (strcmp(gunC, "MP9") == 0)
                {
                    printf("You have selected MP9\n");
                    printf("SMG with high fire rate, 9mm\n");
                    printf("Possible combinations:\n");
                    printf("1. MP9 + AR/DMR\n");
                    printf("2. MP9 + Shotgun\n");
                }
                else
                {
                    printf("Invalid gun selection\n");
                    continue;
                }
                break;
            }
            case 'd':
            {

                printf("You have selected Sniper Rifle\n");
                printf("Choose your gun: \n");
                printf("1. Kar98k \n");
                printf("2. M24 \n");
                printf("3. AWM \n");
                printf("4. MosinNagant \n");
                printf("5. Win94 \n");
                fflush(stdout);
                scanf("%s", gunD);

                if (strcmp(gunD, "Kar98k") == 0)
                {
                    printf("You have selected Kar98k\n");
                    printf("Classic bolt-action sniper, 7.62mm\n");
                    printf("Possible combinations:\n");
                    printf("1. Kar98k + AR/SMG for close range\n");
                    printf("2. Kar98k + Shotgun\n");
                }
                else if (strcmp(gunD, "M24") == 0)
                {
                    printf("You have selected M24\n");
                    printf("Bolt-action, crate and world spawn, 7.62mm\n");
                    printf("Possible combinations:\n");
                    printf("1. M24 + AR/SMG\n");
                    printf("2. M24 + Shotgun\n");
                }
                else if (strcmp(gunD, "AWM") == 0)
                {
                    printf("You have selected AWM\n");
                    printf("Most powerful sniper, crate only, .300 Magnum\n");
                    printf("Possible combinations:\n");
                    printf("1. AWM + AR/SMG\n");
                    printf("2. AWM + Shotgun\n");
                }
                else if (strcmp(gunD, "MosinNagant") == 0)
                {
                    printf("You have selected Mosin Nagant\n");
                    printf("Similar to Kar98k, 7.62mm\n");
                    printf("Possible combinations:\n");
                    printf("1. MosinNagant + AR/SMG\n");
                    printf("2. MosinNagant + Shotgun\n");
                }
                else if (strcmp(gunD, "Win94") == 0)
                {
                    printf("You have selected Win94\n");
                    printf("Lever-action, built-in scope, .45 ACP\n");
                    printf("Possible combinations:\n");
                    printf("1. Win94 + AR/SMG\n");
                    printf("2. Win94 + Shotgun\n");
                }
                else
                {
                    printf("Invalid gun selection\n");
                    continue;
                }
                break;
            }
            case 'e':
            {

                printf("You have selected Shotgun\n");
                printf("Choose your gun: \n");
                printf("1. S1897 \n");
                printf("2. S686 \n");
                printf("3. S12K \n");
                printf("4. DBS \n");
                printf("5. M1014 \n");
                fflush(stdout);
                scanf("%s", gunE);

                if (strcmp(gunE, "S1897") == 0)
                {
                    printf("You have selected S1897\n");
                    printf("Pump-action shotgun, 12 gauge\n");
                    printf("Possible combinations:\n");
                    printf("1. S1897 + AR/SMG for range\n");
                    printf("2. S1897 + DMR\n");
                }
                else if (strcmp(gunE, "S686") == 0)
                {
                    printf("You have selected S686\n");
                    printf("Double-barrel shotgun, 12 gauge\n");
                    printf("Possible combinations:\n");
                    printf("1. S686 + AR/SMG\n");
                    printf("2. S686 + DMR\n");
                }
                else if (strcmp(gunE, "S12K") == 0)
                {
                    printf("You have selected S12K\n");
                    printf("Semi-auto shotgun, 12 gauge\n");
                    printf("Possible combinations:\n");
                    printf("1. S12K + AR/SMG\n");
                    printf("2. S12K + DMR\n");
                }
                else if (strcmp(gunE, "DBS") == 0)
                {
                    printf("You have selected DBS\n");
                    printf("Double-barrel, pump-action, crate shotgun\n");
                    printf("Possible combinations:\n");
                    printf("1. DBS + AR/SMG\n");
                    printf("2. DBS + DMR\n");
                }
                else if (strcmp(gunE, "M1014") == 0)
                {
                    printf("You have selected M1014\n");
                    printf("Semi-auto, world spawn shotgun\n");
                    printf("Possible combinations:\n");
                    printf("1. M1014 + AR/SMG\n");
                    printf("2. M1014 + DMR\n");
                }
                else
                {
                    printf("Invalid gun selection\n");
                    continue;
                }
                break;
            }
            default:
                break;
            }
        }
        else if (strcmp(ans, "no") == 0)
            exit(1);
        else
            printf("Invalid input\n");
    }

    return 0;
}