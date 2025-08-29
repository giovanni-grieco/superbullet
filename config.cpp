class CfgPatches
{
    class Superbullet
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Weapons_F"};
        magazines[] = {"Super_30Rnd_556_AP"};
        ammo[] = {"B_556x45_Super"};
    };
};

class CfgAmmo
{
    class B_556x45_Ball; // Base game ammo

    class B_556x45_Super : B_556x45_Ball
    {
        caliber = 9;
        hit = 4;
    };
};

class CfgMagazines
{
    class 30Rnd_556x45_Stanag; // Base class

    class 30Rnd_556x45_Super : 30Rnd_556x45_Stanag
    {
        author = "Henderson";
        displayName = "5.56mm 30Rnd Super Mag";
        ammo = "B_556x45_Super";
        descriptionShort = "Super Armor-Piercing Rounds";
    };

    /*class 30Rnd_556x45_Super_Emag : 30Rnd_556x45_Stanag
    {
        author = "Henderson";
        displayName = "5.56mm 30Rnd Super EMAG";
        ammo = "B_556x45_Super";
        count = 30;
        initSpeed = 930;
        descriptionShort = "Custom Armor-Piercing Rounds";
    };*/
};

class CfgMagazineWells
{
    class STANAG_556x45
    {
        MyMags[] = {"30Rnd_556x45_Super"};
    };
};