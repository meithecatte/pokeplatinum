#ifndef POKEPLATINUM_UNK_0202602C_H
#define POKEPLATINUM_UNK_0202602C_H

#include "strbuf.h"
#include "struct_decls/struct_02026030_decl.h"
#include "struct_defs/struct_0202610C.h"
#include "struct_decls/struct_021C0794_decl.h"

int sub_0202602C(void);
int RegulationBattles_SaveSize(void);
void sub_02026034(const UnkStruct_0202610C * param0, UnkStruct_0202610C * param1);
void RegulationBattles_Init(UnkStruct_02026030 * param0);
void sub_0202604C(const UnkStruct_0202610C * param0, Strbuf *param1);
Strbuf* sub_0202605C(const UnkStruct_0202610C * param0, int param1);
int sub_02026074(const UnkStruct_0202610C * param0, int param1);
UnkStruct_0202610C * sub_0202610C(SaveData * param0, int param1);
void sub_0202613C(SaveData * param0, const UnkStruct_0202610C * param1);

#endif // POKEPLATINUM_UNK_0202602C_H
