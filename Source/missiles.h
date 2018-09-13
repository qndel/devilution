//HEADER_GOES_HERE
#ifndef __MISSILES_H__
#define __MISSILES_H__

extern int missileactive[MAXMISSILES];
extern int missileavail[MAXMISSILES];
extern MissileStruct missile[MAXMISSILES];
extern int nummissiles; // idb
extern int ManashieldFlag;
extern ChainStruct chain[MAXMISSILES];
extern int MissilePreFlag; // weak
extern int numchains; // weak

void __fastcall GetDamageAmt(int i, int *mind, int *maxd);
int __fastcall CheckBlock(int fx, int fy, int tx, int ty);
int __fastcall FindClosest(int sx, int sy, int rad);
int __fastcall GetSpellLevel(int id, int sn);
int __fastcall GetDirection8(int x1, int y1, int x2, int y2);
int __fastcall GetDirection16(int x1, int y1, int x2, int y2);
void __fastcall DeleteMissile(int mi, int i);
void __fastcall GetMissileVel(int i, int sx, int sy, int dx, int dy, int v);
void __fastcall PutMissile(int i);
void __fastcall GetMissilePos(int i);
void __fastcall MoveMissilePos(int i);
bool __fastcall MonsterTrapHit(int m, int mindam, int maxdam, int dist, int t, int shift);
bool __fastcall MonsterMissileHit(int pnum, int m, int mindam, int maxdam, int dist, int t, int shift);
bool __fastcall PlayerMissileHit(int pnum, int m, int dist, int mind, int maxd, int mtype, int shift, int earflag);
bool __fastcall Plr2PlrMHit(int pnum, int p, int mindam, int maxdam, int dist, int mtype, int shift);
void __fastcall CheckMissileCol(int i, int mindam, int maxdam, bool shift, int mx, int my, int nodel);
void __fastcall SetMissAnim(int mi, int animtype);
void __fastcall SetMissDir(int mi, int dir);
void __fastcall LoadMissileGFX(int mi);
void __cdecl InitMissileGFX();
void __fastcall FreeMissileGFX(int mi);
void __cdecl FreeMissiles();
void __cdecl FreeMissiles2();
void __cdecl InitMissiles();
void __fastcall AddLArrow(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddArrow(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall GetVileMissPos(int mi, int dx, int dy);
void __fastcall AddRndTeleport(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddFirebolt(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam);
void __fastcall AddMagmaball(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall miss_null_33(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddTeleport(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddLightball(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddFirewall(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddFireball(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddLightctrl(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddLightning(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddMisexp(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddWeapexp(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
bool __fastcall CheckIfTrig(int x, int y);
void __fastcall AddTown(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddFlash(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddFlash2(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddManashield(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddFiremove(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddGuardian(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddChain(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall miss_null_11(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall miss_null_12(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall miss_null_13(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddRhino(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall miss_null_32(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddFlare(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddAcid(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall miss_null_1D(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddAcidpud(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddStone(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddGolem(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddEtherealize(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall miss_null_1F(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall miss_null_23(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddBoom(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddHeal(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddHealOther(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddElement(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddIdentify(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddFirewallC(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddInfra(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddWave(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddNova(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddRepair(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddRecharge(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddDisarm(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddApoca(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddFlame(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddFlamec(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddCbolt(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam);
void __fastcall AddHbolt(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam);
void __fastcall AddResurrect(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddResurrectBeam(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddTelekinesis(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddBoneSpirit(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddRportal(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
void __fastcall AddDiabApoca(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam);
int __fastcall AddMissile(int sx, int sy, int v1, int v2, int midir, int mitype, int micaster, int id, int v3, int spllvl);
int __fastcall Sentfire(int i, int sx, int sy);
void __fastcall MI_Dummy(int i);
void __fastcall MI_Golem(int i);
void __fastcall MI_SetManashield(int i);
void __fastcall MI_LArrow(int i);
void __fastcall MI_Arrow(int i);
void __fastcall MI_Firebolt(int i);
void __fastcall MI_Lightball(int i);
void __fastcall mi_null_33(int i);
void __fastcall MI_Acidpud(int i);
void __fastcall MI_Firewall(int i);
void __fastcall MI_Fireball(int i);
void __fastcall MI_Lightctrl(int i);
void __fastcall MI_Lightning(int i);
void __fastcall MI_Town(int i);
void __fastcall MI_Flash(int i);
void __fastcall MI_Flash2(int i);
void __fastcall MI_Manashield(int i);
void __fastcall MI_Etherealize(int i);
void __fastcall MI_Firemove(int i);
void __fastcall MI_Guardian(int i);
void __fastcall MI_Chain(int i);
void __fastcall mi_null_11(int i);
void __fastcall MI_Weapexp(int i);
void __fastcall MI_Misexp(int i);
void __fastcall MI_Acidsplat(int i);
void __fastcall MI_Teleport(int i);
void __fastcall MI_Stone(int i);
void __fastcall MI_Boom(int i);
void __fastcall MI_Rhino(int i);
void __fastcall mi_null_32(int i);
void __fastcall MI_FirewallC(int i);
void __fastcall MI_Infra(int i);
void __fastcall MI_Apoca(int i);
void __fastcall MI_Wave(int i);
void __fastcall MI_Nova(int i);
void __fastcall MI_Blodboil(int i);
void __fastcall MI_Flame(int i);
void __fastcall MI_Flamec(int i);
void __fastcall MI_Cbolt(int i);
void __fastcall MI_Hbolt(int i);
void __fastcall MI_Element(int i);
void __fastcall MI_Bonespirit(int i);
void __fastcall MI_ResurrectBeam(int i);
void __fastcall MI_Rportal(int i);
void __cdecl ProcessMissiles();
void __cdecl missiles_process_charge();
void __fastcall ClearMissileSpot(int mi);

/* rdata */

extern MissileData missiledata[68];
extern MisFileData misfiledata[47];
extern int XDirAdd[8];
extern int YDirAdd[8];

#endif /* __MISSILES_H__ */
