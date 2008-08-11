/* ANSI-C code produced by gperf version 3.0.1 */
/* Command-line: gperf -L ANSI-C -tCG -m 10 -K name -H FuncsStrCommandHash -N FuncsStrCommandLookup -W FuncsStrCommandList --output-file=gperf.out FuncsStrCmds.gperf  */
/* Computed positions: -k'1,4,8' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 1 "FuncsStrCmds.gperf"

/***************************************************************************
    NWNXFuncs.h - Interface for the CNWNXFuncs class.
    Copyright (C) 2007 Doug Swarin (zac@intertex.net)

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 ***************************************************************************/

#ifndef NWNX_FUNCS_STRCMDS_H
#define NWNX_FUNCS_STRCMDS_H

#ifdef __cplusplus
extern "C" {
#endif

#line 30 "FuncsStrCmds.gperf"
struct FuncsStrCommand_s {
    const char  *name;
    void       (*func)(CGameObject *, char *);
};

#define NWNX_FUNCS_STRCMD_TOTAL_KEYWORDS 94
#define NWNX_FUNCS_STRCMD_MIN_WORD_LENGTH 6
#define NWNX_FUNCS_STRCMD_MAX_WORD_LENGTH 25
#define NWNX_FUNCS_STRCMD_MIN_HASH_VALUE 11
#define NWNX_FUNCS_STRCMD_MAX_HASH_VALUE 183
/* maximum key range = 173, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
FuncsStrCommandHash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184,   5,  64,  47,  64,  52,
       13,   0, 184,  27,  34,  13,  34,  54,   8,  59,
       57,  13,  24,   2,   3,   1, 184,  16, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184, 184, 184, 184, 184,
      184, 184, 184, 184, 184, 184
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
      case 6:
      case 5:
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

static const struct FuncsStrCommand_s FuncsStrCommandList[] =
  {
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""},
#line 127 "FuncsStrCmds.gperf"
    {"SETTAG",                                Func_SetTag},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""},
#line 57 "FuncsStrCmds.gperf"
    {"GETGROUNDHEIGHT",                       Func_GetGroundHeight},
#line 43 "FuncsStrCmds.gperf"
    {"GETACNATURALBASE",                      Func_GetACNaturalBase},
    {""},
#line 99 "FuncsStrCmds.gperf"
    {"SETACNATURALBASE",                      Func_SetACNaturalBase},
#line 64 "FuncsStrCmds.gperf"
    {"GETKNOWSFEAT",                          Func_GetKnowsFeat},
#line 65 "FuncsStrCmds.gperf"
    {"GETKNOWSSPELL",                         Func_GetKnowsSpell},
#line 76 "FuncsStrCmds.gperf"
    {"GETSAVINGTHROWBONUS",                   Func_GetSavingThrowBonus},
    {""},
#line 123 "FuncsStrCmds.gperf"
    {"SETSAVINGTHROWBONUS",                   Func_SetSavingThrowBonus},
#line 101 "FuncsStrCmds.gperf"
    {"SETALIGNMENTVALUE",                     Func_SetAlignmentValue},
#line 61 "FuncsStrCmds.gperf"
    {"GETKNOWNFEAT",                          Func_GetKnownFeat},
#line 63 "FuncsStrCmds.gperf"
    {"GETKNOWNSPELL",                         Func_GetKnownSpell},
#line 110 "FuncsStrCmds.gperf"
    {"SETKNOWNFEAT",                          Func_SetKnownFeat},
#line 112 "FuncsStrCmds.gperf"
    {"SETKNOWNSPELL",                         Func_SetKnownSpell},
#line 56 "FuncsStrCmds.gperf"
    {"GETFIRSTLOCALVARIABLE",                 Func_GetFirstLocalVariable},
#line 37 "FuncsStrCmds.gperf"
    {"ADDKNOWNFEAT",                          Func_AddKnownFeat},
#line 39 "FuncsStrCmds.gperf"
    {"ADDKNOWNSPELL",                         Func_AddKnownSpell},
#line 62 "FuncsStrCmds.gperf"
    {"GETKNOWNFEATBYLEVEL",                   Func_GetKnownFeatByLevel},
#line 73 "FuncsStrCmds.gperf"
    {"GETQUICKBARSLOT",                       Func_GetQuickBarSlot},
#line 111 "FuncsStrCmds.gperf"
    {"SETKNOWNFEATBYLEVEL",                   Func_SetKnownFeatByLevel},
#line 120 "FuncsStrCmds.gperf"
    {"SETQUICKBARSLOT",                       Func_SetQuickBarSlot},
#line 121 "FuncsStrCmds.gperf"
    {"SETRACIALTYPE",                         Func_SetRacialType},
#line 38 "FuncsStrCmds.gperf"
    {"ADDKNOWNFEATATLEVEL",                   Func_AddKnownFeatAtLevel},
#line 79 "FuncsStrCmds.gperf"
    {"GETSPECIALABILITY",                     Func_GetSpecialAbility},
#line 36 "FuncsStrCmds.gperf"
    {"ACTIONUSEITEM",                         Func_ActionUseItem},
#line 126 "FuncsStrCmds.gperf"
    {"SETSPECIALABILITY",                     Func_SetSpecialAbility},
#line 100 "FuncsStrCmds.gperf"
    {"SETABILITYSCORE",                       Func_SetAbilityScore},
#line 124 "FuncsStrCmds.gperf"
    {"SETSKILLRANK",                          Func_SetSkillRank},
#line 40 "FuncsStrCmds.gperf"
    {"ADDSPECIALABILITY",                     Func_AddSpecialAbility},
#line 55 "FuncsStrCmds.gperf"
    {"GETFACTIONID",                          Func_GetFactionId},
#line 80 "FuncsStrCmds.gperf"
    {"GETTOTALFEATUSES",                      Func_GetTotalFeatUses},
#line 107 "FuncsStrCmds.gperf"
    {"SETFACTIONID",                          Func_SetFactionId},
#line 81 "FuncsStrCmds.gperf"
    {"GETTOTALKNOWNFEATS",                    Func_GetTotalKnownFeats},
#line 83 "FuncsStrCmds.gperf"
    {"GETTOTALKNOWNSPELLS",                   Func_GetTotalKnownSpells},
#line 44 "FuncsStrCmds.gperf"
    {"GETABILITYINCREASEBYLEVEL",             Func_GetAbilityIncreaseByLevel},
#line 109 "FuncsStrCmds.gperf"
    {"SETITEMWEIGHT",                         Func_SetItemWeight},
#line 77 "FuncsStrCmds.gperf"
    {"GETSKILLINCREASEBYLEVEL",               Func_GetSkillIncreaseByLevel},
    {""},
#line 84 "FuncsStrCmds.gperf"
    {"GETTOTALSPECIALABILITIES",              Func_GetTotalSpecialAbilities},
#line 82 "FuncsStrCmds.gperf"
    {"GETTOTALKNOWNFEATSBYLEVEL",             Func_GetTotalKnownFeatsByLevel},
#line 85 "FuncsStrCmds.gperf"
    {"GETWIZARDSPECIALIZATION",               Func_GetWizardSpecialization},
#line 48 "FuncsStrCmds.gperf"
    {"GETCLASSBYLEVEL",                       Func_GetClassByLevel},
#line 129 "FuncsStrCmds.gperf"
    {"SETWIZARDSPECIALIZATION",               Func_SetWizardSpecialization},
#line 128 "FuncsStrCmds.gperf"
    {"SETTRAPCREATOR",                        Func_SetTrapCreator},
#line 104 "FuncsStrCmds.gperf"
    {"SETCREATURESIZE",                       Func_SetCreatureSize},
#line 97 "FuncsStrCmds.gperf"
    {"RESTOREREADYFEATS",                     Func_RestoreReadyFeats},
#line 98 "FuncsStrCmds.gperf"
    {"RESTOREREADYSPELLS",                    Func_RestoreReadySpells},
#line 54 "FuncsStrCmds.gperf"
    {"GETEVENTHANDLER",                       Func_GetEventHandler},
#line 74 "FuncsStrCmds.gperf"
    {"GETREMAININGFEATUSES",                  Func_GetRemainingFeatUses},
#line 106 "FuncsStrCmds.gperf"
    {"SETEVENTHANDLER",                       Func_SetEventHandler},
#line 75 "FuncsStrCmds.gperf"
    {"GETREMAININGSPELLSLOTS",                Func_GetRemainingSpellSlots},
#line 58 "FuncsStrCmds.gperf"
    {"GETISWALKABLE",                         Func_GetIsWalkable},
#line 122 "FuncsStrCmds.gperf"
    {"SETREMAININGSPELLSLOTS",                Func_SetRemainingSpellSlots},
#line 108 "FuncsStrCmds.gperf"
    {"SETGOLDPIECEVALUE",                     Func_SetGoldPieceValue},
#line 78 "FuncsStrCmds.gperf"
    {"GETSOUNDSET",                           Func_GetSoundset},
#line 45 "FuncsStrCmds.gperf"
    {"GETALLMEMORIZEDSPELLS",                 Func_GetAllMemorizedSpells},
#line 125 "FuncsStrCmds.gperf"
    {"SETSOUNDSET",                           Func_SetSoundset},
#line 46 "FuncsStrCmds.gperf"
    {"GETALLREMAININGFEATUSES",               Func_GetAllRemainingFeatUses},
#line 53 "FuncsStrCmds.gperf"
    {"GETDAMAGEIMMUNITY",                     Func_GetDamageImmunity},
#line 86 "FuncsStrCmds.gperf"
    {"INTTOOBJECTREQUEST",                    Func_IntToObjectRequest},
    {""},
#line 47 "FuncsStrCmds.gperf"
    {"GETBONUSSPELLSLOTS",                    Func_GetBonusSpellSlots},
    {""},
#line 60 "FuncsStrCmds.gperf"
    {"GETITEMCOUNT",                          Func_GetItemCount},
#line 95 "FuncsStrCmds.gperf"
    {"REPLACEKNOWNFEAT",                      Func_ReplaceKnownFeat},
#line 96 "FuncsStrCmds.gperf"
    {"REPLACEKNOWNSPELL",                     Func_ReplaceKnownSpell},
#line 49 "FuncsStrCmds.gperf"
    {"GETCLERICDOMAIN",                       Func_GetClericDomain},
#line 70 "FuncsStrCmds.gperf"
    {"GETPCPORT",                             Func_GetPCPort},
#line 102 "FuncsStrCmds.gperf"
    {"SETCLERICDOMAIN",                       Func_SetClericDomain},
#line 72 "FuncsStrCmds.gperf"
    {"GETPORTRAIT",                           Func_GetPortrait},
#line 52 "FuncsStrCmds.gperf"
    {"GETCRITICALHITRANGE",                   Func_GetCriticalHitRange},
#line 119 "FuncsStrCmds.gperf"
    {"SETPORTRAIT",                           Func_SetPortrait},
#line 68 "FuncsStrCmds.gperf"
    {"GETMEMORIZEDSPELL",                     Func_GetMemorizedSpell},
    {""},
#line 114 "FuncsStrCmds.gperf"
    {"SETMEMORIZEDSPELL",                     Func_SetMemorizedSpell},
#line 51 "FuncsStrCmds.gperf"
    {"GETCRITICALHITMULTIPLIER",              Func_GetCriticalHitMultiplier},
    {""},
#line 71 "FuncsStrCmds.gperf"
    {"GETPCSKILLPOINTS",                      Func_GetPCSkillPoints},
    {""},
#line 118 "FuncsStrCmds.gperf"
    {"SETPCSKILLPOINTS",                      Func_SetPCSkillPoints},
#line 66 "FuncsStrCmds.gperf"
    {"GETMAXHITPOINTSBYLEVEL",                Func_GetMaxHitPointsByLevel},
#line 89 "FuncsStrCmds.gperf"
    {"MODIFYCURRENTHITPOINTS",                Func_ModifyCurrentHitPoints},
#line 113 "FuncsStrCmds.gperf"
    {"SETMAXHITPOINTSBYLEVEL",                Func_SetMaxHitPointsByLevel},
#line 91 "FuncsStrCmds.gperf"
    {"REMOVEKNOWNFEAT",                       Func_RemoveKnownFeat},
#line 93 "FuncsStrCmds.gperf"
    {"REMOVEKNOWNSPELL",                      Func_RemoveKnownSpell},
    {""},
#line 90 "FuncsStrCmds.gperf"
    {"MODIFYSKILLRANK",                       Func_ModifySkillRank},
    {""},
#line 41 "FuncsStrCmds.gperf"
    {"BOOTPCWITHMESSAGE",                     Func_BootPCWithMessage},
    {""},
#line 92 "FuncsStrCmds.gperf"
    {"REMOVEKNOWNFEATBYLEVEL",                Func_RemoveKnownFeatByLevel},
#line 50 "FuncsStrCmds.gperf"
    {"GETCONVERSATION",                       Func_GetConversation},
#line 59 "FuncsStrCmds.gperf"
    {"GETITEMBYPOSITIONREQUEST",              Func_GetItemByPositionRequest},
#line 103 "FuncsStrCmds.gperf"
    {"SETCONVERSATION",                       Func_SetConversation},
    {""}, {""}, {""},
#line 105 "FuncsStrCmds.gperf"
    {"SETCURRENTHITPOINTS",                   Func_SetCurrentHitPoints},
    {""}, {""}, {""}, {""},
#line 115 "FuncsStrCmds.gperf"
    {"SETMOVEMENTRATE",                       Func_SetMovementRate},
    {""},
#line 67 "FuncsStrCmds.gperf"
    {"GETMAXSPELLSLOTS",                      Func_GetMaxSpellSlots},
    {""},
#line 87 "FuncsStrCmds.gperf"
    {"JUMPTOLIMBO",                           Func_JumpToLimbo},
    {""},
#line 117 "FuncsStrCmds.gperf"
    {"SETPCLOOTABLE",                         Func_SetPCLootable},
    {""},
#line 69 "FuncsStrCmds.gperf"
    {"GETPCBODYBAG",                          Func_GetPCBodyBag},
    {""},
#line 116 "FuncsStrCmds.gperf"
    {"SETPCBODYBAG",                          Func_SetPCBodyBag},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""},
#line 94 "FuncsStrCmds.gperf"
    {"REMOVESPECIALABILITY",                  Func_RemoveSpecialAbility},
    {""}, {""},
#line 88 "FuncsStrCmds.gperf"
    {"MODIFYABILITYSCORE",                    Func_ModifyAbilityScore},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
#line 42 "FuncsStrCmds.gperf"
    {"DUMPOBJECT",                            Func_DumpObject}
  };

#ifdef __GNUC__
__inline
#endif
static const struct FuncsStrCommand_s *
FuncsStrCommandLookup (register const char *str, register unsigned int len)
{
  if (len <= NWNX_FUNCS_STRCMD_MAX_WORD_LENGTH && len >= NWNX_FUNCS_STRCMD_MIN_WORD_LENGTH)
    {
      register int key = FuncsStrCommandHash (str, len);

      if (key <= NWNX_FUNCS_STRCMD_MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = FuncsStrCommandList[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &FuncsStrCommandList[key];
        }
    }
  return 0;
}
#line 130 "FuncsStrCmds.gperf"


#ifdef __cplusplus
}
#endif

#endif /* NWNX_FUNCS_STRCMDS_H */

/* vim: set sw=4: */