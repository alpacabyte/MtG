cmake_minimum_required(VERSION 3.19)
project(MtG)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(MtG main.cpp Card.cpp Card.h creatureCard.cpp creatureCard.h enchantmentCard.cpp enchantmentCard.h landCard.cpp landCard.h sorceryCard.cpp sorceryCard.h Player.cpp Player.h Effect.cpp Effect.h DestroyCreatureEffect.cpp DestroyCreatureEffect.h DestroyEnchantmentEffect.cpp DestroyEnchantmentEffect.h Deal2DamageToCreatureOrPlayerEffect.cpp Deal2DamageToCreatureOrPlayerEffect.h DestroyLandEffect.cpp DestroyLandEffect.h ReturnDiscardToHandEffect.cpp ReturnDiscardToHandEffect.h Deal1DamageToAllCreaturesEffect.cpp Deal1DamageToAllCreaturesEffect.h TargetGainTrampleEffect.cpp TargetGainTrampleEffect.h AllColorGainStatsEffect.cpp AllColorGainStatsEffect.h AllColorLoseTrampleEffect.cpp AllColorLoseTrampleEffect.h TargetLoseFirstStrikeEffect.cpp TargetLoseFirstStrikeEffect.h Game.cpp Game.h ManaCost.cpp ManaCost.h)