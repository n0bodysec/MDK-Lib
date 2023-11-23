
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C
/// Size: 0x0003 (0x0002F0 - 0x0002F3)
class UWBP_UIKit_Block_Base_C : public UUIKitBlock
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 755;

public:
	DMember(bool)                                      IsSelectable                                                OFFSET(get<bool>, {0x2F0, 1, 0, 0})
	DMember(bool)                                      IsSelected                                                  OFFSET(get<bool>, {0x2F1, 1, 0, 0})
	DMember(bool)                                      IsLocked                                                    OFFSET(get<bool>, {0x2F2, 1, 0, 0})


	/// Functions
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.SetIsSelectable
	// void SetIsSelectable(bool Is Selectable);                                                                                // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.GetIsSelectable
	// void GetIsSelectable(bool& IsSelectable);                                                                                // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.SetIsLocked
	// void SetIsLocked(bool Is Locked);                                                                                        // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.GetIsLocked
	// void GetIsLocked(bool& IsLocked);                                                                                        // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.SetIsSelected
	// void SetIsSelected(bool IsSelected);                                                                                     // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.GetIsSelected
	// void GetIsSelected(bool& IsSelected);                                                                                    // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
};

/// Class /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_EditableText.WBP_UIKit_Block_EditableText_C
/// Size: 0x0035 (0x0002F3 - 0x000328)
class UWBP_UIKit_Block_EditableText_C : public UWBP_UIKit_Block_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(UWidgetAnimation*)                         Anim_Disabled_Transition                                    OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Pressed_Transition                                     OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Focused_Transition                                     OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Hovered_Transition                                     OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UUIKitEditableText*)                       EditableText                                                OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 FontDynamicMaterial                                         OFFSET(get<T>, {0x320, 8, 0, 0})


	/// Functions
	// Function /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_EditableText.WBP_UIKit_Block_EditableText_C.SetMobileFontSizeMultiplier
	// void SetMobileFontSizeMultiplier(float MobileFontSizeMultiplier);                                                        // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_EditableText.WBP_UIKit_Block_EditableText_C.SetJustification
	// void SetJustification(TEnumAsByte<ETextJustify> Justification);                                                          // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_EditableText.WBP_UIKit_Block_EditableText_C.SetMinDesiredWidth
	// void SetMinDesiredWidth(double Min Width);                                                                               // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_EditableText.WBP_UIKit_Block_EditableText_C.SetIsPassword
	// void SetIsPassword(bool IsPassword);                                                                                     // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_EditableText.WBP_UIKit_Block_EditableText_C.SetReadOnly
	// void SetReadOnly(bool IsReadOnly);                                                                                       // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_EditableText.WBP_UIKit_Block_EditableText_C.SetFontMaterial
	// void SetFontMaterial(UMaterialInstance* Material Instance);                                                              // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_EditableText.WBP_UIKit_Block_EditableText_C.SetFont
	// void SetFont(FSlateFontInfo Font);                                                                                       // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_EditableText.WBP_UIKit_Block_EditableText_C.SetHintText
	// void SetHintText(FText Hint Text);                                                                                       // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_EditableText.WBP_UIKit_Block_EditableText_C.SetText
	// void SetText(FText Text);                                                                                                // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_BlockBackground_Base.WBP_UIKit_BlockBackground_Base_C
/// Size: 0x002D (0x0002F3 - 0x000320)
class UWBP_UIKit_BlockBackground_Base_C : public UWBP_UIKit_Block_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2F8, 8, 0, 0})
	CMember(UMaterialInstance*)                        BackgroundMaterial                                          OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 BackgroundDynamicMaterial                                   OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UMaterialInstance*)                        OutlineMaterial                                             OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 OutlineDynamicMaterial                                      OFFSET(get<T>, {0x318, 8, 0, 0})


	/// Functions
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_BlockBackground_Base.WBP_UIKit_BlockBackground_Base_C.SetOutlineMaterial
	// void SetOutlineMaterial(UMaterialInstance*& Material Instance);                                                          // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_BlockBackground_Base.WBP_UIKit_BlockBackground_Base_C.SetOutlineBrush
	// void SetOutlineBrush(FSlateBrush& In Brush);                                                                             // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_BlockBackground_Base.WBP_UIKit_BlockBackground_Base_C.SetBackgroundMaterial
	// void SetBackgroundMaterial(UMaterialInstance*& Material Instance);                                                       // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_BlockBackground_Base.WBP_UIKit_BlockBackground_Base_C.SetBackgroundBrush
	// void SetBackgroundBrush(FSlateBrush& InBrush);                                                                           // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_BlockBackground_Base.WBP_UIKit_BlockBackground_Base_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x101681c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_BlockBackground_Base.WBP_UIKit_BlockBackground_Base_C.ExecuteUbergraph_WBP_UIKit_BlockBackground_Base
	// void ExecuteUbergraph_WBP_UIKit_BlockBackground_Base(int32_t EntryPoint);                                                // [0x101681c] Final                
};

/// Class /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundGeneric.WBP_UIKit_Block_BackgroundGeneric_C
/// Size: 0x0068 (0x000320 - 0x000388)
class UWBP_UIKit_Block_BackgroundGeneric_C : public UWBP_UIKit_BlockBackground_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x320, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_SelectedDisabled_Transition                            OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_SelectedPressed_Transition                             OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_SelectedFocused_Transition                             OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_SelectedHovered_Transition                             OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Selected_Transition                                    OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Disabled_Transition                                    OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Pressed_Transition                                     OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Focused_Transition                                     OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Hovered_Transition                                     OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UFortMobileImage*)                         Fill                                                        OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UFortMobileImage*)                         Outline                                                     OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UNamedSlot*)                               Slot_Main                                                   OFFSET(get<T>, {0x380, 8, 0, 0})


	/// Functions
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundGeneric.WBP_UIKit_Block_BackgroundGeneric_C.SetOutlineMaterial
	// void SetOutlineMaterial(UMaterialInstance*& Material Instance);                                                          // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundGeneric.WBP_UIKit_Block_BackgroundGeneric_C.SetOutlineBrush
	// void SetOutlineBrush(FSlateBrush& In Brush);                                                                             // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundGeneric.WBP_UIKit_Block_BackgroundGeneric_C.SetBackgroundMaterial
	// void SetBackgroundMaterial(UMaterialInstance*& Material Instance);                                                       // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundGeneric.WBP_UIKit_Block_BackgroundGeneric_C.SetBackgroundBrush
	// void SetBackgroundBrush(FSlateBrush& InBrush);                                                                           // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundGeneric.WBP_UIKit_Block_BackgroundGeneric_C.OnTransitionSelectedRequested
	// void OnTransitionSelectedRequested();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundGeneric.WBP_UIKit_Block_BackgroundGeneric_C.OnTransitionDeselectedIdleRequested
	// void OnTransitionDeselectedIdleRequested();                                                                              // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundGeneric.WBP_UIKit_Block_BackgroundGeneric_C.OnTransitionDeselectedFocusedRequested
	// void OnTransitionDeselectedFocusedRequested();                                                                           // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundGeneric.WBP_UIKit_Block_BackgroundGeneric_C.OnTransitionEnabledRequested
	// void OnTransitionEnabledRequested();                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundGeneric.WBP_UIKit_Block_BackgroundGeneric_C.OnTransitionDisabledRequested
	// void OnTransitionDisabledRequested();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundGeneric.WBP_UIKit_Block_BackgroundGeneric_C.OnTransitionReleasedRequested
	// void OnTransitionReleasedRequested();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundGeneric.WBP_UIKit_Block_BackgroundGeneric_C.OnTransitionPressedRequested
	// void OnTransitionPressedRequested();                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundGeneric.WBP_UIKit_Block_BackgroundGeneric_C.OnTransitionUnfocusedRequested
	// void OnTransitionUnfocusedRequested();                                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundGeneric.WBP_UIKit_Block_BackgroundGeneric_C.OnTransitionFocusedRequested
	// void OnTransitionFocusedRequested();                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundGeneric.WBP_UIKit_Block_BackgroundGeneric_C.OnTransitionUnhoveredRequested
	// void OnTransitionUnhoveredRequested();                                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundGeneric.WBP_UIKit_Block_BackgroundGeneric_C.OnTransitionHoveredRequested
	// void OnTransitionHoveredRequested();                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundGeneric.WBP_UIKit_Block_BackgroundGeneric_C.OnInstantTransitionToEnabled
	// void OnInstantTransitionToEnabled();                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundGeneric.WBP_UIKit_Block_BackgroundGeneric_C.OnInstantTransitionToDisabled
	// void OnInstantTransitionToDisabled();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundGeneric.WBP_UIKit_Block_BackgroundGeneric_C.OnInstantTransitionToSelected
	// void OnInstantTransitionToSelected();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundGeneric.WBP_UIKit_Block_BackgroundGeneric_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x101681c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundGeneric.WBP_UIKit_Block_BackgroundGeneric_C.ExecuteUbergraph_WBP_UIKit_Block_BackgroundGeneric
	// void ExecuteUbergraph_WBP_UIKit_Block_BackgroundGeneric(int32_t EntryPoint);                                             // [0x101681c] Final                
};

/// Class /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Image.WBP_UIKit_Block_Image_C
/// Size: 0x012D (0x0002F3 - 0x000420)
class UWBP_UIKit_Block_Image_C : public UWBP_UIKit_Block_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_SelectedDisabled_Transition                            OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_SelectedPressed_Transition                             OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_SelectedFocused_Transition                             OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_SelectedHovered_Transition                             OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Selected_Transition                                    OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Disabled_Transition                                    OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Pressed_Transition                                     OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Focused_Transition                                     OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Hovered_Transition                                     OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UFortMobileImage*)                         Image                                                       OFFSET(get<T>, {0x348, 8, 0, 0})
	SMember(FSlateBrush)                               Brush                                                       OFFSET(getStruct<T>, {0x350, 192, 0, 0})
	CMember(UTexture2D*)                               Texture                                                     OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 ImageDynamicMaterial                                        OFFSET(get<T>, {0x418, 8, 0, 0})


	/// Functions
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Image.WBP_UIKit_Block_Image_C.SetSize
	// void SetSize(FVector2D Desired Size);                                                                                    // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Image.WBP_UIKit_Block_Image_C.SetMaterial
	// void SetMaterial(UMaterialInstance*& InMaterial);                                                                        // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Image.WBP_UIKit_Block_Image_C.SetTexture
	// void SetTexture(UTexture2D*& InTexture);                                                                                 // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Image.WBP_UIKit_Block_Image_C.SetBrush
	// void SetBrush(FSlateBrush& InBrush);                                                                                     // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Image.WBP_UIKit_Block_Image_C.OnTransitionSelectedRequested
	// void OnTransitionSelectedRequested();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Image.WBP_UIKit_Block_Image_C.OnTransitionDeselectedIdleRequested
	// void OnTransitionDeselectedIdleRequested();                                                                              // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Image.WBP_UIKit_Block_Image_C.OnTransitionDeselectedFocusedRequested
	// void OnTransitionDeselectedFocusedRequested();                                                                           // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Image.WBP_UIKit_Block_Image_C.OnTransitionEnabledRequested
	// void OnTransitionEnabledRequested();                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Image.WBP_UIKit_Block_Image_C.OnTransitionDisabledRequested
	// void OnTransitionDisabledRequested();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Image.WBP_UIKit_Block_Image_C.OnTransitionReleasedRequested
	// void OnTransitionReleasedRequested();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Image.WBP_UIKit_Block_Image_C.OnTransitionPressedRequested
	// void OnTransitionPressedRequested();                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Image.WBP_UIKit_Block_Image_C.OnInstantTransitionToEnabled
	// void OnInstantTransitionToEnabled();                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Image.WBP_UIKit_Block_Image_C.OnInstantTransitionToDisabled
	// void OnInstantTransitionToDisabled();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Image.WBP_UIKit_Block_Image_C.OnTransitionUnfocusedRequested
	// void OnTransitionUnfocusedRequested();                                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Image.WBP_UIKit_Block_Image_C.OnInstantTransitionToSelected
	// void OnInstantTransitionToSelected();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Image.WBP_UIKit_Block_Image_C.OnTransitionFocusedRequested
	// void OnTransitionFocusedRequested();                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Image.WBP_UIKit_Block_Image_C.OnTransitionUnhoveredRequested
	// void OnTransitionUnhoveredRequested();                                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Image.WBP_UIKit_Block_Image_C.OnTransitionHoveredRequested
	// void OnTransitionHoveredRequested();                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Image.WBP_UIKit_Block_Image_C.ExecuteUbergraph_WBP_UIKit_Block_Image
	// void ExecuteUbergraph_WBP_UIKit_Block_Image(int32_t EntryPoint);                                                         // [0x101681c] Final                
};

/// Class /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Text.WBP_UIKit_Block_Text_C
/// Size: 0x00BD (0x0002F3 - 0x0003B0)
class UWBP_UIKit_Block_Text_C : public UWBP_UIKit_Block_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_SelectedDisabled_Transition                            OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_SelectedPressed_Transition                             OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_SelectedFocused_Transition                             OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_SelectedHovered_Transition                             OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Selected_Transition                                    OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Disabled_Transition                                    OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Pressed_Transition                                     OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Focused_Transition                                     OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Hovered_Transition                                     OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextBlock                                                   OFFSET(get<T>, {0x348, 8, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x350, 88, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 FontDynamicMaterial                                         OFFSET(get<T>, {0x3A8, 8, 0, 0})


	/// Functions
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Text.WBP_UIKit_Block_Text_C.SetWrapping
	// void SetWrapping(bool IsAutoWrap, int32_t WrapTextAt);                                                                   // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Text.WBP_UIKit_Block_Text_C.SetJustification
	// void SetJustification(TEnumAsByte<ETextJustify> Justification);                                                          // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Text.WBP_UIKit_Block_Text_C.SetTransformPolicy
	// void SetTransformPolicy(ETextTransformPolicy Transform Policy);                                                          // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Text.WBP_UIKit_Block_Text_C.SetFontMaterial
	// void SetFontMaterial(UMaterialInstance* In Material);                                                                    // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Text.WBP_UIKit_Block_Text_C.SetMobileFontSizeMultiplier
	// void SetMobileFontSizeMultiplier(double MobileFontSizeMultiplier);                                                       // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Text.WBP_UIKit_Block_Text_C.SetFont
	// void SetFont(FSlateFontInfo& Font);                                                                                      // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Text.WBP_UIKit_Block_Text_C.SetText
	// void SetText(FText Text);                                                                                                // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Text.WBP_UIKit_Block_Text_C.OnTransitionSelectedRequested
	// void OnTransitionSelectedRequested();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Text.WBP_UIKit_Block_Text_C.OnTransitionDeselectedIdleRequested
	// void OnTransitionDeselectedIdleRequested();                                                                              // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Text.WBP_UIKit_Block_Text_C.OnTransitionDeselectedFocusedRequested
	// void OnTransitionDeselectedFocusedRequested();                                                                           // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Text.WBP_UIKit_Block_Text_C.OnTransitionEnabledRequested
	// void OnTransitionEnabledRequested();                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Text.WBP_UIKit_Block_Text_C.OnTransitionDisabledRequested
	// void OnTransitionDisabledRequested();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Text.WBP_UIKit_Block_Text_C.OnTransitionReleasedRequested
	// void OnTransitionReleasedRequested();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Text.WBP_UIKit_Block_Text_C.OnTransitionPressedRequested
	// void OnTransitionPressedRequested();                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Text.WBP_UIKit_Block_Text_C.OnInstantTransitionToEnabled
	// void OnInstantTransitionToEnabled();                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Text.WBP_UIKit_Block_Text_C.OnInstantTransitionToDisabled
	// void OnInstantTransitionToDisabled();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Text.WBP_UIKit_Block_Text_C.OnInstantTransitionToSelected
	// void OnInstantTransitionToSelected();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Text.WBP_UIKit_Block_Text_C.OnTransitionUnfocusedRequested
	// void OnTransitionUnfocusedRequested();                                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Text.WBP_UIKit_Block_Text_C.OnTransitionFocusedRequested
	// void OnTransitionFocusedRequested();                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Text.WBP_UIKit_Block_Text_C.OnTransitionUnhoveredRequested
	// void OnTransitionUnhoveredRequested();                                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Text.WBP_UIKit_Block_Text_C.OnTransitionHoveredRequested
	// void OnTransitionHoveredRequested();                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Text.WBP_UIKit_Block_Text_C.ExecuteUbergraph_WBP_UIKit_Block_Text
	// void ExecuteUbergraph_WBP_UIKit_Block_Text(int32_t EntryPoint);                                                          // [0x101681c] Final                
};

/// Class /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundCTA.WBP_UIKit_Block_BackgroundCTA_C
/// Size: 0x0052 (0x000320 - 0x000372)
class UWBP_UIKit_Block_BackgroundCTA_C : public UWBP_UIKit_BlockBackground_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 882;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x320, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Outline_Glow                                           OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Outline                                                OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Disabled_Transition                                    OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Pressed_Transition                                     OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Focused_Transition                                     OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UImage*)                                   Backing                                                     OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UImage*)                                   FocusOutline                                                OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UImage*)                                   FocusOutline_Glow                                           OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UImage*)                                   Glow                                                        OFFSET(get<T>, {0x368, 8, 0, 0})
	DMember(bool)                                      AdditiveBorder                                              OFFSET(get<bool>, {0x370, 1, 0, 0})
	DMember(bool)                                      SelectionIsAvailable                                        OFFSET(get<bool>, {0x371, 1, 0, 0})


	/// Functions
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundCTA.WBP_UIKit_Block_BackgroundCTA_C.SetOutlineMaterial
	// void SetOutlineMaterial(UMaterialInstance*& Material Instance);                                                          // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundCTA.WBP_UIKit_Block_BackgroundCTA_C.SetBackgroundMaterial
	// void SetBackgroundMaterial(UMaterialInstance*& Material Instance);                                                       // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundCTA.WBP_UIKit_Block_BackgroundCTA_C.SetBackgroundBrush
	// void SetBackgroundBrush(FSlateBrush& InBrush);                                                                           // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundCTA.WBP_UIKit_Block_BackgroundCTA_C.OnTransitionSelectedRequested
	// void OnTransitionSelectedRequested();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundCTA.WBP_UIKit_Block_BackgroundCTA_C.OnTransitionDeselectedIdleRequested
	// void OnTransitionDeselectedIdleRequested();                                                                              // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundCTA.WBP_UIKit_Block_BackgroundCTA_C.OnTransitionDeselectedFocusedRequested
	// void OnTransitionDeselectedFocusedRequested();                                                                           // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundCTA.WBP_UIKit_Block_BackgroundCTA_C.OnTransitionEnabledRequested
	// void OnTransitionEnabledRequested();                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundCTA.WBP_UIKit_Block_BackgroundCTA_C.OnTransitionDisabledRequested
	// void OnTransitionDisabledRequested();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundCTA.WBP_UIKit_Block_BackgroundCTA_C.OnTransitionReleasedRequested
	// void OnTransitionReleasedRequested();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundCTA.WBP_UIKit_Block_BackgroundCTA_C.OnTransitionPressedRequested
	// void OnTransitionPressedRequested();                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundCTA.WBP_UIKit_Block_BackgroundCTA_C.OnTransitionUnfocusedRequested
	// void OnTransitionUnfocusedRequested();                                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundCTA.WBP_UIKit_Block_BackgroundCTA_C.OnTransitionFocusedRequested
	// void OnTransitionFocusedRequested();                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundCTA.WBP_UIKit_Block_BackgroundCTA_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x101681c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundCTA.WBP_UIKit_Block_BackgroundCTA_C.OnInstantTransitionToEnabled
	// void OnInstantTransitionToEnabled();                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundCTA.WBP_UIKit_Block_BackgroundCTA_C.OnInstantTransitionToDisabled
	// void OnInstantTransitionToDisabled();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_BackgroundCTA.WBP_UIKit_Block_BackgroundCTA_C.ExecuteUbergraph_WBP_UIKit_Block_BackgroundCTA
	// void ExecuteUbergraph_WBP_UIKit_Block_BackgroundCTA(int32_t EntryPoint);                                                 // [0x101681c] Final                
};

/// Class /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C
/// Size: 0x0262 (0x0014A0 - 0x001702)
class UWBP_UIKit_ButtonGeneric_Base_C : public UUIKitModularButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5890;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14A0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Focused_Base                                           OFFSET(get<T>, {0x14A8, 8, 0, 0})
	CMember(UImage*)                                   HoldIcon                                                    OFFSET(get<T>, {0x14B0, 8, 0, 0})
	CMember(UImage*)                                   HoldProgressBar                                             OFFSET(get<T>, {0x14B8, 8, 0, 0})
	CMember(UGridPanel*)                               Main                                                        OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(UGridPanel*)                               Prompt                                                      OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UGridPanel*)                               Root                                                        OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UNamedSlot*)                               Slot_Background                                             OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UNamedSlot*)                               Slot_Main                                                   OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UCommonVisualAttachment*)                  VisualAttachment                                            OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         ContentHorizontalAlignment                                  OFFSET(get<T>, {0x14F0, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           ContentVerticalAlignment                                    OFFSET(get<T>, {0x14F1, 1, 0, 0})
	SMember(FMargin)                                   ButtonPadding                                               OFFSET(getStruct<T>, {0x14F4, 16, 0, 0})
	DMember(double)                                    FadeInTime                                                  OFFSET(get<double>, {0x1508, 8, 0, 0})
	DMember(double)                                    FadeOutTime                                                 OFFSET(get<double>, {0x1510, 8, 0, 0})
	CMember(USoundBase*)                               PressedSound                                                OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(USoundBase*)                               HoveredSound                                                OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(USoundBase*)                               HoldPressedSound                                            OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(USoundBase*)                               HoldSound                                                   OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(USoundBase*)                               HoldReleasedSound                                           OFFSET(get<T>, {0x1538, 8, 0, 0})
	CMember(USoundBase*)                               HoldCompletedSound                                          OFFSET(get<T>, {0x1540, 8, 0, 0})
	CMember(UAudioComponent*)                          HoldSoundAudioComponent                                     OFFSET(get<T>, {0x1548, 8, 0, 0})
	CMember(UAudioComponent*)                          PressedSoundAudioComponent                                  OFFSET(get<T>, {0x1550, 8, 0, 0})
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x1558, 24, 0, 0})
	DMember(bool)                                      UseIconBlock                                                OFFSET(get<bool>, {0x1570, 1, 0, 0})
	CMember(UClass*)                                   IconClass                                                   OFFSET(get<T>, {0x1578, 8, 0, 0})
	CMember(UMaterialInstance*)                        IconMaterial                                                OFFSET(get<T>, {0x1580, 8, 0, 0})
	SMember(FVector2D)                                 IconSize                                                    OFFSET(getStruct<T>, {0x1588, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         IconHorizontalAlignment                                     OFFSET(get<T>, {0x1598, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           IconVerticalAlignment                                       OFFSET(get<T>, {0x1599, 1, 0, 0})
	SMember(FMargin)                                   IconPadding                                                 OFFSET(getStruct<T>, {0x159C, 16, 0, 0})
	DMember(bool)                                      UseBackgroundBlock                                          OFFSET(get<bool>, {0x15AC, 1, 0, 0})
	CMember(UClass*)                                   BackgroundClass                                             OFFSET(get<T>, {0x15B0, 8, 0, 0})
	CMember(UMaterialInstance*)                        BackgroundMaterial                                          OFFSET(get<T>, {0x15B8, 8, 0, 0})
	CMember(UMaterialInstance*)                        OutlineMaterial                                             OFFSET(get<T>, {0x15C0, 8, 0, 0})
	DMember(bool)                                      IsQuiet                                                     OFFSET(get<bool>, {0x15C8, 1, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         PromptHorizontalAlignment                                   OFFSET(get<T>, {0x15C9, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           PromptVerticalAlignment                                     OFFSET(get<T>, {0x15CA, 1, 0, 0})
	DMember(bool)                                      ShouldPromptImpactLayout                                    OFFSET(get<bool>, {0x15CB, 1, 0, 0})
	SMember(FMargin)                                   PromptPadding                                               OFFSET(getStruct<T>, {0x15CC, 16, 0, 0})
	SMember(FVector2D)                                 PromptNudge                                                 OFFSET(getStruct<T>, {0x15E0, 16, 0, 0})
	DMember(bool)                                      MovePromptWithBorder                                        OFFSET(get<bool>, {0x15F0, 1, 0, 0})
	CMember(UTexture2D*)                               Icon                                                        OFFSET(get<T>, {0x15F8, 8, 0, 0})
	DMember(double)                                    MobileFontSizeMultiplier                                    OFFSET(get<double>, {0x1600, 8, 0, 0})
	DMember(bool)                                      OverrideDefaultMobileFontSizeMultiplier                     OFFSET(get<bool>, {0x1608, 1, 0, 0})
	DMember(double)                                    MobileFontSizeMultiplierOverride                            OFFSET(get<double>, {0x1610, 8, 0, 0})
	DMember(int32_t)                                   MobileMinWidth                                              OFFSET(get<int32_t>, {0x1618, 4, 0, 0})
	DMember(int32_t)                                   MobileMinHeight                                             OFFSET(get<int32_t>, {0x161C, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHoldCompleted                                             OFFSET(getStruct<T>, {0x1620, 16, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 InputActionProgressMaterial                                 OFFSET(get<T>, {0x1630, 8, 0, 0})
	CMember(UWBP_UIKit_BlockBackground_Base_C*)        Block_Background                                            OFFSET(get<T>, {0x1638, 8, 0, 0})
	CMember(UWBP_UIKit_Block_Text_C*)                  Block_Text                                                  OFFSET(get<T>, {0x1640, 8, 0, 0})
	CMember(UWBP_UIKit_Block_Image_C*)                 Block_Icon                                                  OFFSET(get<T>, {0x1648, 8, 0, 0})
	CMember(ECommonInputType)                          CurrentInputType                                            OFFSET(get<T>, {0x1650, 1, 0, 0})
	DMember(double)                                    CurrentHoldProgress                                         OFFSET(get<double>, {0x1658, 8, 0, 0})
	DMember(bool)                                      UseTextBlock                                                OFFSET(get<bool>, {0x1660, 1, 0, 0})
	CMember(UClass*)                                   TextClass                                                   OFFSET(get<T>, {0x1668, 8, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x1670, 88, 0, 0})
	CMember(TEnumAsByte<E_UI_Alignment>)               TextBlockAlignment                                          OFFSET(get<T>, {0x16C8, 1, 0, 0})
	DMember(bool)                                      IsTextOutsideBackground                                     OFFSET(get<bool>, {0x16C9, 1, 0, 0})
	DMember(bool)                                      ShouldTextImpactLayout                                      OFFSET(get<bool>, {0x16CA, 1, 0, 0})
	SMember(FMargin)                                   TextPadding                                                 OFFSET(getStruct<T>, {0x16CC, 16, 0, 0})
	SMember(FVector2D)                                 TextNudge                                                   OFFSET(getStruct<T>, {0x16E0, 16, 0, 0})
	SMember(FMargin)                                   MobileButtonPadding                                         OFFSET(getStruct<T>, {0x16F0, 16, 0, 0})
	DMember(bool)                                      IsInstantSelection                                          OFFSET(get<bool>, {0x1700, 1, 0, 0})
	DMember(bool)                                      LastEnabledEvent                                            OFFSET(get<bool>, {0x1701, 1, 0, 0})


	/// Functions
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.SetButtonIsEnabled
	// void SetButtonIsEnabled();                                                                                               // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.ResetButtonState
	// void ResetButtonState();                                                                                                 // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.RequestInstantSelection
	// void RequestInstantSelection();                                                                                          // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.Cleanup
	// void Cleanup(UWidget* Widget);                                                                                           // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.FadeOutSound
	// void FadeOutSound();                                                                                                     // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.PlaySoundHoldCompleted
	// void PlaySoundHoldCompleted();                                                                                           // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.PlaySoundHoldReleased
	// void PlaySoundHoldReleased();                                                                                            // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.PlaySoundHoldPressed
	// void PlaySoundHoldPressed();                                                                                             // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.PlaySoundPressed
	// void PlaySoundPressed();                                                                                                 // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.PlaySoundHovered
	// void PlaySoundHovered();                                                                                                 // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.PresetForDesignTime
	// void PresetForDesignTime();                                                                                              // [0x101681c] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.IsPromptHoldable
	// void IsPromptHoldable(bool& Holdable);                                                                                   // [0x101681c] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.IsPromptIcon
	// void IsPromptIcon(bool& Valid);                                                                                          // [0x101681c] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.ShowPromptFallbackAction
	// void ShowPromptFallbackAction(bool Show);                                                                                // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.SetHoldPercentage
	// void SetHoldPercentage(double HoldPercentage);                                                                           // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.SetBlocksIsSelected
	// void SetBlocksIsSelected(bool IsSelected);                                                                               // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.ClearPrompt
	// void ClearPrompt();                                                                                                      // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.UpdatePrompt
	// void UpdatePrompt(ECommonInputType InputType);                                                                           // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.SetPrompt
	// void SetPrompt();                                                                                                        // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.GetBackgroundDynamicMaterial
	// void GetBackgroundDynamicMaterial(UMaterialInstanceDynamic*& Dynamic Material);                                          // [0x101681c] Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.UpdateInputPrompt
	// void UpdateInputPrompt();                                                                                                // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.SetBackgroundMaterials
	// void SetBackgroundMaterials(UMaterialInstance* Background MI, UMaterialInstance* Outline MI);                            // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.Debug
	// void Debug(FName State);                                                                                                 // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.AddIconBlock
	// void AddIconBlock();                                                                                                     // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.AddTextBlock
	// void AddTextBlock();                                                                                                     // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.AddBackground
	// void AddBackground();                                                                                                    // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.UpdateIcon
	// void UpdateIcon();                                                                                                       // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.UpdateText
	// void UpdateText();                                                                                                       // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.UpdateButton
	// void UpdateButton();                                                                                                     // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.SetButtonContentAlignment
	// void SetButtonContentAlignment(TEnumAsByte<EHorizontalAlignment> HorizontalAlignment, TEnumAsByte<EVerticalAlignment> VerticalAlignment); // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.SetButtonPadding
	// void SetButtonPadding(FMargin Padding);                                                                                  // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.SetButtonMinWidth
	// void SetButtonMinWidth(int32_t Min Width, int32_t Min Height);                                                           // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.SetIconPadding
	// void SetIconPadding(FMargin Padding);                                                                                    // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.SetGridNudge
	// void SetGridNudge(UWidget* Widget, FVector2D Nudge);                                                                     // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.SetGridPadding
	// void SetGridPadding(UWidget* Widget, FMargin Padding);                                                                   // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.SetGridLayer
	// void SetGridLayer(UWidget* Widget, int32_t Layer);                                                                       // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.SetGridAlignment
	// void SetGridAlignment(UWidget* Widget, TEnumAsByte<EHorizontalAlignment> Horizontal, TEnumAsByte<EVerticalAlignment> Vertical); // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.SetGridColumnAndRow
	// void SetGridColumnAndRow(UWidget* Widget, int32_t Row, int32_t Row Span, int32_t Column, int32_t Column Span);           // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.SetIconSize
	// void SetIconSize(FVector2D Icon);                                                                                        // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.SetIconMaterial
	// void SetIconMaterial(UMaterialInstance* Material Instance);                                                              // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.SetData
	// void SetData(UUIKitSelectableButtonViewModel* VM Button);                                                                // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.SetIcon
	// void SetIcon(UTexture2D* Icon);                                                                                          // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.SetFont
	// void SetFont(FSlateFontInfo In Font);                                                                                    // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.SetText
	// void SetText(FText Text);                                                                                                // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.BP_OnInputMethodChanged
	// void BP_OnInputMethodChanged(ECommonInputType CurrentInputType);                                                         // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.OnActionProgress
	// void OnActionProgress(float HeldPercent);                                                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.BP_OnClicked
	// void BP_OnClicked();                                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.Construct
	// void Construct();                                                                                                        // [0x101681c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.BP_OnDeselected
	// void BP_OnDeselected();                                                                                                  // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.BP_OnSelected
	// void BP_OnSelected();                                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.BP_OnEnabled
	// void BP_OnEnabled();                                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.BP_OnDisabled
	// void BP_OnDisabled();                                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.BP_OnReleased
	// void BP_OnReleased();                                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.BP_OnWidgetStyled
	// void BP_OnWidgetStyled();                                                                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.BP_OnPressed
	// void BP_OnPressed();                                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.BP_OnInputActionTriggered
	// void BP_OnInputActionTriggered();                                                                                        // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.Destruct
	// void Destruct();                                                                                                         // [0x101681c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x101681c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.ExecuteUbergraph_WBP_UIKit_ButtonGeneric_Base
	// void ExecuteUbergraph_WBP_UIKit_ButtonGeneric_Base(int32_t EntryPoint);                                                  // [0x101681c] Final|HasDefaults    
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonGeneric_Base.WBP_UIKit_ButtonGeneric_Base_C.OnHoldCompleted__DelegateSignature
	// void OnHoldCompleted__DelegateSignature();                                                                               // [0x101681c] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /FortUILibrary/Systems/Backplate/WBP_UIKit_Backplate_Base.WBP_UIKit_Backplate_Base_C
/// Size: 0x0078 (0x0002C0 - 0x000338)
class UWBP_UIKit_Backplate_Base_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C0, 8, 0, 0})
	CMember(UImage*)                                   Backplate                                                   OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UBackgroundBlur*)                          BlurWidget                                                  OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(TEnumAsByte<E_UI_BackplateBrightness>)     Brightness                                                  OFFSET(get<T>, {0x2D8, 1, 0, 0})
	CMember(TEnumAsByte<E_UI_BackplateCornerRadius>)   CornerRadius                                                OFFSET(get<T>, {0x2D9, 1, 0, 0})
	DMember(double)                                    BackplateCornerRadius                                       OFFSET(get<double>, {0x2E0, 8, 0, 0})
	DMember(double)                                    InteractiveCornerRadius                                     OFFSET(get<double>, {0x2E8, 8, 0, 0})
	DMember(double)                                    ButtonCornerRadius                                          OFFSET(get<double>, {0x2F0, 8, 0, 0})
	DMember(double)                                    CircleCornerRadius                                          OFFSET(get<double>, {0x2F8, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 BackplateDynamicMaterial                                    OFFSET(get<T>, {0x300, 8, 0, 0})
	DMember(double)                                    Blur                                                        OFFSET(get<double>, {0x308, 8, 0, 0})
	CMember(UMaterialInstance*)                        BackplateMaterial                                           OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UMaterialInstance*)                        DefaultBackplateMaterial                                    OFFSET(get<T>, {0x318, 8, 0, 0})
	DMember(bool)                                      DeactivateTopLeftCornerRadius                               OFFSET(get<bool>, {0x320, 1, 0, 0})
	DMember(bool)                                      DeactivateTopRightCornerRadius                              OFFSET(get<bool>, {0x321, 1, 0, 0})
	DMember(bool)                                      DeactivateBottomRightCornerRadius                           OFFSET(get<bool>, {0x322, 1, 0, 0})
	DMember(bool)                                      DeactivateBottomLeftCornerRadius                            OFFSET(get<bool>, {0x323, 1, 0, 0})
	DMember(double)                                    BackplateCornerRadiusMobile                                 OFFSET(get<double>, {0x328, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 FallBackDynamicMaterialInstance                             OFFSET(get<T>, {0x330, 8, 0, 0})


	/// Functions
	// Function /FortUILibrary/Systems/Backplate/WBP_UIKit_Backplate_Base.WBP_UIKit_Backplate_Base_C.SetFallbackBrush
	// void SetFallbackBrush();                                                                                                 // [0x101681c] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Backplate/WBP_UIKit_Backplate_Base.WBP_UIKit_Backplate_Base_C.InitializeBackplate
	// void InitializeBackplate();                                                                                              // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Backplate/WBP_UIKit_Backplate_Base.WBP_UIKit_Backplate_Base_C.SetBlur
	// void SetBlur(float Blur Strength);                                                                                       // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Backplate/WBP_UIKit_Backplate_Base.WBP_UIKit_Backplate_Base_C.SetBackplateMaterial
	// void SetBackplateMaterial(UMaterialInstance* Material Instance);                                                         // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Backplate/WBP_UIKit_Backplate_Base.WBP_UIKit_Backplate_Base_C.SetBrightness
	// void SetBrightness(TEnumAsByte<E_UI_BackplateBrightness> Brightness);                                                    // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Backplate/WBP_UIKit_Backplate_Base.WBP_UIKit_Backplate_Base_C.SetCornerRadius
	// void SetCornerRadius(TEnumAsByte<E_UI_BackplateCornerRadius> Corner Radius);                                             // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Backplate/WBP_UIKit_Backplate_Base.WBP_UIKit_Backplate_Base_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x101681c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/Systems/Backplate/WBP_UIKit_Backplate_Base.WBP_UIKit_Backplate_Base_C.ExecuteUbergraph_WBP_UIKit_Backplate_Base
	// void ExecuteUbergraph_WBP_UIKit_Backplate_Base(int32_t EntryPoint);                                                      // [0x101681c] Final                
};

/// Class /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_BackgroundRounded.WBP_UIKit_Block_BackgroundRounded_C
/// Size: 0x0031 (0x000320 - 0x000351)
class UWBP_UIKit_Block_BackgroundRounded_C : public UWBP_UIKit_BlockBackground_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 849;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x320, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Disabled_Transition                                    OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Pressed_Transition                                     OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Focused_Transition                                     OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UImage*)                                   Backing                                                     OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UWBP_UIKit_Backplate_Glass_C*)             WBP_UIKit_Backplate_Glass                                   OFFSET(get<T>, {0x348, 8, 0, 0})
	DMember(bool)                                      SelectionIsAvailable                                        OFFSET(get<bool>, {0x350, 1, 0, 0})


	/// Functions
	// Function /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_BackgroundRounded.WBP_UIKit_Block_BackgroundRounded_C.SetCornerRadius
	// void SetCornerRadius(bool Radius in Pixels, double TopLeft, double TopRight, double BottomRight, double BottomLeft);     // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_BackgroundRounded.WBP_UIKit_Block_BackgroundRounded_C.SetBackgroundMaterial
	// void SetBackgroundMaterial(UMaterialInstance*& Material Instance);                                                       // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_BackgroundRounded.WBP_UIKit_Block_BackgroundRounded_C.SetBackgroundBrush
	// void SetBackgroundBrush(FSlateBrush& InBrush);                                                                           // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_BackgroundRounded.WBP_UIKit_Block_BackgroundRounded_C.OnTransitionDeselectedFocusedRequested
	// void OnTransitionDeselectedFocusedRequested();                                                                           // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_BackgroundRounded.WBP_UIKit_Block_BackgroundRounded_C.OnTransitionDeselectedIdleRequested
	// void OnTransitionDeselectedIdleRequested();                                                                              // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_BackgroundRounded.WBP_UIKit_Block_BackgroundRounded_C.OnTransitionSelectedRequested
	// void OnTransitionSelectedRequested();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_BackgroundRounded.WBP_UIKit_Block_BackgroundRounded_C.OnTransitionEnabledRequested
	// void OnTransitionEnabledRequested();                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_BackgroundRounded.WBP_UIKit_Block_BackgroundRounded_C.OnInstantTransitionToEnabled
	// void OnInstantTransitionToEnabled();                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_BackgroundRounded.WBP_UIKit_Block_BackgroundRounded_C.OnInstantTransitionToDisabled
	// void OnInstantTransitionToDisabled();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_BackgroundRounded.WBP_UIKit_Block_BackgroundRounded_C.OnTransitionDisabledRequested
	// void OnTransitionDisabledRequested();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_BackgroundRounded.WBP_UIKit_Block_BackgroundRounded_C.OnTransitionReleasedRequested
	// void OnTransitionReleasedRequested();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_BackgroundRounded.WBP_UIKit_Block_BackgroundRounded_C.OnTransitionPressedRequested
	// void OnTransitionPressedRequested();                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_BackgroundRounded.WBP_UIKit_Block_BackgroundRounded_C.OnTransitionUnfocusedRequested
	// void OnTransitionUnfocusedRequested();                                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_BackgroundRounded.WBP_UIKit_Block_BackgroundRounded_C.OnTransitionFocusedRequested
	// void OnTransitionFocusedRequested();                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_BackgroundRounded.WBP_UIKit_Block_BackgroundRounded_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x101681c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_BackgroundRounded.WBP_UIKit_Block_BackgroundRounded_C.ExecuteUbergraph_WBP_UIKit_Block_BackgroundRounded
	// void ExecuteUbergraph_WBP_UIKit_Block_BackgroundRounded(int32_t EntryPoint);                                             // [0x101681c] Final                
};

/// Class /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C
/// Size: 0x01E4 (0x0014A0 - 0x001684)
class UWBP_UIKit_InputField_Base_C : public UUIKitModularButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5764;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14A0, 8, 0, 0})
	CMember(UWBP_UIKit_Block_EditableText_C*)          Block_EditableText                                          OFFSET(get<T>, {0x14A8, 8, 0, 0})
	CMember(UWBP_UIKit_Button_Outline_C*)              Block_Outline                                               OFFSET(get<T>, {0x14B0, 8, 0, 0})
	CMember(UGridPanel*)                               Content                                                     OFFSET(get<T>, {0x14B8, 8, 0, 0})
	CMember(UGridPanel*)                               Main                                                        OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox                                                     OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UNamedSlot*)                               Slot_Main                                                   OFFSET(get<T>, {0x14D0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTextChanged                                               OFFSET(getStruct<T>, {0x14D8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTextCommited                                              OFFSET(getStruct<T>, {0x14E8, 16, 0, 0})
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x14F8, 24, 0, 0})
	DMember(double)                                    Mobile_Text_Size_Multiplier                                 OFFSET(get<double>, {0x1510, 8, 0, 0})
	SMember(FText)                                     Hint_Text                                                   OFFSET(getStruct<T>, {0x1518, 24, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x1530, 88, 0, 0})
	CMember(TEnumAsByte<ETextJustify>)                 TextJustification                                           OFFSET(get<T>, {0x1588, 1, 0, 0})
	SMember(FMargin)                                   TextPadding                                                 OFFSET(getStruct<T>, {0x158C, 16, 0, 0})
	DMember(bool)                                      IsPassword                                                  OFFSET(get<bool>, {0x159C, 1, 0, 0})
	DMember(bool)                                      IsReadOnly                                                  OFFSET(get<bool>, {0x159D, 1, 0, 0})
	SMember(FS_UI_BoolFloat)                           WidthOverride                                               OFFSET(getStruct<T>, {0x15A0, 16, 0, 0})
	SMember(FS_UI_BoolFloat)                           HeightOverride                                              OFFSET(getStruct<T>, {0x15B0, 16, 0, 0})
	DMember(bool)                                      UseBackground                                               OFFSET(get<bool>, {0x15C0, 1, 0, 0})
	CMember(UWBP_UIKit_BlockBackground_Base_C*)        Block_Background                                            OFFSET(get<T>, {0x15C8, 8, 0, 0})
	CMember(UClass*)                                   BackgroundClass                                             OFFSET(get<T>, {0x15D0, 8, 0, 0})
	CMember(UMaterialInstance*)                        BackgroundMaterial                                          OFFSET(get<T>, {0x15D8, 8, 0, 0})
	DMember(bool)                                      UseIcon                                                     OFFSET(get<bool>, {0x15E0, 1, 0, 0})
	CMember(UClass*)                                   IconClass                                                   OFFSET(get<T>, {0x15E8, 8, 0, 0})
	CMember(UWBP_UIKit_Block_Image_C*)                 Block_Icon                                                  OFFSET(get<T>, {0x15F0, 8, 0, 0})
	CMember(UTexture2D*)                               Icon                                                        OFFSET(get<T>, {0x15F8, 8, 0, 0})
	SMember(FS_UI_Image)                               IconProperties                                              OFFSET(getStruct<T>, {0x1600, 88, 0, 0})
	DMember(bool)                                      UsePixels                                                   OFFSET(get<bool>, {0x1658, 1, 0, 0})
	DMember(double)                                    TopLeft                                                     OFFSET(get<double>, {0x1660, 8, 0, 0})
	DMember(double)                                    TopRight                                                    OFFSET(get<double>, {0x1668, 8, 0, 0})
	DMember(double)                                    BottomRight                                                 OFFSET(get<double>, {0x1670, 8, 0, 0})
	DMember(double)                                    BottomLeft                                                  OFFSET(get<double>, {0x1678, 8, 0, 0})
	DMember(int32_t)                                   MaxTextCharacters                                           OFFSET(get<int32_t>, {0x1680, 4, 0, 0})


	/// Functions
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.SetMaxTextCharacters
	// void SetMaxTextCharacters(bool& IsTextTrimmed);                                                                          // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.PresetForDesignTime
	// void PresetForDesignTime();                                                                                              // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.SetIconProperties
	// void SetIconProperties(FS_UI_Image Data);                                                                                // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.AddIcon
	// void AddIcon();                                                                                                          // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.SetGridNudge
	// void SetGridNudge(UWidget* Widget, FVector2D Nudge);                                                                     // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.SetGridPadding
	// void SetGridPadding(UWidget* Widget, FMargin Padding);                                                                   // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.SetGridLayer
	// void SetGridLayer(UWidget* Widget, int32_t Layer);                                                                       // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.SetGridAlignment
	// void SetGridAlignment(UWidget* Widget, TEnumAsByte<EHorizontalAlignment> Horizontal, TEnumAsByte<EVerticalAlignment> Vertical); // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.SetGridColumnAndRow
	// void SetGridColumnAndRow(UWidget* Widget, int32_t Row, int32_t Row Span, int32_t Column, int32_t Column Span);           // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.SetPlacement
	// void SetPlacement(UWidget* Widget, FS_UI_Placement Placement);                                                           // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.Cleanup
	// void Cleanup(UWidget* Widget);                                                                                           // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.AddBackground
	// void AddBackground();                                                                                                    // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.SetEditableText
	// void SetEditableText();                                                                                                  // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.SetSize
	// void SetSize(FS_UI_BoolFloat Width, FS_UI_BoolFloat Height);                                                             // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.SetIcon
	// void SetIcon(UTexture2D* Icon);                                                                                          // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.SetHintText
	// void SetHintText(FText Hint Text);                                                                                       // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.SetText
	// void SetText(FText Text);                                                                                                // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x101681c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.OnTextChanged_Event
	// void OnTextChanged_Event(FText& Text);                                                                                   // [0x101681c] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.OnTextCommitted_Event
	// void OnTextCommitted_Event(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);                                          // [0x101681c] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.OnInitialized
	// void OnInitialized();                                                                                                    // [0x101681c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.BP_OnPressed
	// void BP_OnPressed();                                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.BP_OnReleased
	// void BP_OnReleased();                                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.BP_OnWidgetStyled
	// void BP_OnWidgetStyled();                                                                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.ExecuteUbergraph_WBP_UIKit_InputField_Base
	// void ExecuteUbergraph_WBP_UIKit_InputField_Base(int32_t EntryPoint);                                                     // [0x101681c] Final|HasDefaults    
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.OnTextCommited__DelegateSignature
	// void OnTextCommited__DelegateSignature(FText Text, TEnumAsByte<ETextCommit> Commit method);                              // [0x101681c] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/InputField/WBP_UIKit_InputField_Base.WBP_UIKit_InputField_Base_C.OnTextChanged__DelegateSignature
	// void OnTextChanged__DelegateSignature(FText Text);                                                                       // [0x101681c] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C
/// Size: 0x05F4 (0x0014B0 - 0x001AA4)
class UWBP_UIKit_ButtonCTA_Base_C : public UFortCTAButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6820;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14B0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Pressed_Base                                           OFFSET(get<T>, {0x14B8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Focused_Base                                           OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(UWBP_UIKit_Block_Image_C*)                 Block_Image                                                 OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UWBP_UIKit_ButtonText_CTA_C*)              Block_SecondaryText                                         OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UWBP_UIKit_ButtonText_CTA_C*)              Block_Text                                                  OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UGridPanel*)                               Content                                                     OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UImage*)                                   HoldIcon                                                    OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(UImage*)                                   HoldProgressBar                                             OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(UGridPanel*)                               Prompt                                                      OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(UGridPanel*)                               PromptAlignment                                             OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UGridPanel*)                               Root                                                        OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(UGridPanel*)                               TextAndIcon                                                 OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(UVerticalBox*)                             VerticalBox_Text                                            OFFSET(get<T>, {0x1518, 8, 0, 0})
	SMember(FSlateFontInfo)                            LargePrimaryFont                                            OFFSET(getStruct<T>, {0x1520, 88, 0, 0})
	SMember(FSlateFontInfo)                            LargeSecondaryFont                                          OFFSET(getStruct<T>, {0x1578, 88, 0, 0})
	SMember(FSlateFontInfo)                            MediumPrimaryFont                                           OFFSET(getStruct<T>, {0x15D0, 88, 0, 0})
	SMember(FSlateFontInfo)                            MeduimSecondaryFont                                         OFFSET(getStruct<T>, {0x1628, 88, 0, 0})
	SMember(FSlateFontInfo)                            SmallPrimaryFont                                            OFFSET(getStruct<T>, {0x1680, 88, 0, 0})
	SMember(FSlateFontInfo)                            SmallSecondaryFont                                          OFFSET(getStruct<T>, {0x16D8, 88, 0, 0})
	CMember(TEnumAsByte<ModularButtonSize>)            ButtonSize                                                  OFFSET(get<T>, {0x1730, 1, 0, 0})
	SMember(FMargin)                                   SingleTextLargePadding                                      OFFSET(getStruct<T>, {0x1734, 16, 0, 0})
	SMember(FMargin)                                   SingleTextMediumPadding                                     OFFSET(getStruct<T>, {0x1744, 16, 0, 0})
	SMember(FMargin)                                   SingleTextSmallPadding                                      OFFSET(getStruct<T>, {0x1754, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextLargePadding                                      OFFSET(getStruct<T>, {0x1764, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextMediumPadding                                     OFFSET(getStruct<T>, {0x1774, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextSmallPadding                                      OFFSET(getStruct<T>, {0x1784, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextSecondaryLargePadding                             OFFSET(getStruct<T>, {0x1794, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextSecondaryMediumPadding                            OFFSET(getStruct<T>, {0x17A4, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextSecondarySmallPadding                             OFFSET(getStruct<T>, {0x17B4, 16, 0, 0})
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x17C8, 24, 0, 0})
	SMember(FText)                                     TextSecondary                                               OFFSET(getStruct<T>, {0x17E0, 24, 0, 0})
	DMember(bool)                                      OverrideSecondaryTextSize                                   OFFSET(get<bool>, {0x17F8, 1, 0, 0})
	DMember(double)                                    OverrideSecondaryTextSizeMultiplier                         OFFSET(get<double>, {0x1800, 8, 0, 0})
	CMember(UClass*)                                   BackgroundClass                                             OFFSET(get<T>, {0x1808, 8, 0, 0})
	CMember(UMaterialInstance*)                        BackgroundMaterial                                          OFFSET(get<T>, {0x1810, 8, 0, 0})
	CMember(UMaterialInstance*)                        BorderMaterial                                              OFFSET(get<T>, {0x1818, 8, 0, 0})
	DMember(bool)                                      IsBorderAdditive                                            OFFSET(get<bool>, {0x1820, 1, 0, 0})
	DMember(int32_t)                                   LargeHeight                                                 OFFSET(get<int32_t>, {0x1824, 4, 0, 0})
	DMember(int32_t)                                   MediumHeight                                                OFFSET(get<int32_t>, {0x1828, 4, 0, 0})
	DMember(int32_t)                                   SmallHeight                                                 OFFSET(get<int32_t>, {0x182C, 4, 0, 0})
	CMember(UWBP_UIKit_BlockBackground_Base_C*)        Block_Background                                            OFFSET(get<T>, {0x1830, 8, 0, 0})
	DMember(int32_t)                                   GridUnit                                                    OFFSET(get<int32_t>, {0x1838, 4, 0, 0})
	SMember(FWidgetTransform)                          LeftToRightTransform                                        OFFSET(getStruct<T>, {0x1840, 56, 0, 0})
	SMember(FWidgetTransform)                          RightToLeftTransform                                        OFFSET(getStruct<T>, {0x1878, 56, 0, 0})
	DMember(bool)                                      SingleText                                                  OFFSET(get<bool>, {0x18B0, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFocusChanged                                              OFFSET(getStruct<T>, {0x18B8, 16, 0, 0})
	DMember(double)                                    MobileFontSizeMultiplierLarge                               OFFSET(get<double>, {0x18C8, 8, 0, 0})
	DMember(double)                                    MobileFontSizeMultiplierMedium                              OFFSET(get<double>, {0x18D0, 8, 0, 0})
	DMember(double)                                    MobileFontSizeMultiplierSmall                               OFFSET(get<double>, {0x18D8, 8, 0, 0})
	DMember(int32_t)                                   MobileMinWidth                                              OFFSET(get<int32_t>, {0x18E0, 4, 0, 0})
	DMember(bool)                                      OverrideDefaultHeight                                       OFFSET(get<bool>, {0x18E4, 1, 0, 0})
	DMember(int32_t)                                   MobileMinHeight                                             OFFSET(get<int32_t>, {0x18E8, 4, 0, 0})
	DMember(int32_t)                                   MobileLargeHeight                                           OFFSET(get<int32_t>, {0x18EC, 4, 0, 0})
	DMember(int32_t)                                   MobileMediumHeight                                          OFFSET(get<int32_t>, {0x18F0, 4, 0, 0})
	DMember(int32_t)                                   MobileSmallHeight                                           OFFSET(get<int32_t>, {0x18F4, 4, 0, 0})
	SMember(FMargin)                                   MobileSingleTextLargePadding                                OFFSET(getStruct<T>, {0x18F8, 16, 0, 0})
	SMember(FMargin)                                   MobileSingleTextMediumPadding                               OFFSET(getStruct<T>, {0x1908, 16, 0, 0})
	SMember(FMargin)                                   MobileSingleTextSmallPadding                                OFFSET(getStruct<T>, {0x1918, 16, 0, 0})
	SMember(FMargin)                                   MobileDoubleTextLargePadding                                OFFSET(getStruct<T>, {0x1928, 16, 0, 0})
	SMember(FMargin)                                   MobileDoubleTextMediumPadding                               OFFSET(getStruct<T>, {0x1938, 16, 0, 0})
	SMember(FMargin)                                   MobileDoubleTextSmallPadding                                OFFSET(getStruct<T>, {0x1948, 16, 0, 0})
	SMember(FMargin)                                   MobileDoubleTextSecondaryLargePadding                       OFFSET(getStruct<T>, {0x1958, 16, 0, 0})
	SMember(FMargin)                                   MobileDoubleTextSecondaryMediumPadding                      OFFSET(getStruct<T>, {0x1968, 16, 0, 0})
	SMember(FMargin)                                   MobileDoubleTextSecondarySmallPadding                       OFFSET(getStruct<T>, {0x1978, 16, 0, 0})
	DMember(double)                                    MobileFontSizeMultiplierSecondaryLarge                      OFFSET(get<double>, {0x1988, 8, 0, 0})
	DMember(double)                                    MobileFontSizeMultiplierSecondaryMedium                     OFFSET(get<double>, {0x1990, 8, 0, 0})
	DMember(double)                                    MobileFontSizeMultiplierSecondarySmall                      OFFSET(get<double>, {0x1998, 8, 0, 0})
	DMember(bool)                                      OverrideDefaultMobileFontSizeMultiplier                     OFFSET(get<bool>, {0x19A0, 1, 0, 0})
	DMember(double)                                    MobileFontSizeMultiplierOverride                            OFFSET(get<double>, {0x19A8, 8, 0, 0})
	DMember(bool)                                      NoText                                                      OFFSET(get<bool>, {0x19B0, 1, 0, 0})
	DMember(bool)                                      NoIcon                                                      OFFSET(get<bool>, {0x19B1, 1, 0, 0})
	DMember(bool)                                      NoPrompt                                                    OFFSET(get<bool>, {0x19B2, 1, 0, 0})
	DMember(bool)                                      LastEnabledEvent                                            OFFSET(get<bool>, {0x19B3, 1, 0, 0})
	DMember(double)                                    FadeInTime                                                  OFFSET(get<double>, {0x19B8, 8, 0, 0})
	DMember(double)                                    FadeOutTime                                                 OFFSET(get<double>, {0x19C0, 8, 0, 0})
	CMember(USoundBase*)                               PressedSound                                                OFFSET(get<T>, {0x19C8, 8, 0, 0})
	CMember(USoundBase*)                               HoveredSound                                                OFFSET(get<T>, {0x19D0, 8, 0, 0})
	CMember(USoundBase*)                               HoldPressedSound                                            OFFSET(get<T>, {0x19D8, 8, 0, 0})
	CMember(USoundBase*)                               HoldSound                                                   OFFSET(get<T>, {0x19E0, 8, 0, 0})
	CMember(USoundBase*)                               HoldReleasedSound                                           OFFSET(get<T>, {0x19E8, 8, 0, 0})
	CMember(USoundBase*)                               HoldCompletedSound                                          OFFSET(get<T>, {0x19F0, 8, 0, 0})
	CMember(UAudioComponent*)                          HoldSoundAudioComponent                                     OFFSET(get<T>, {0x19F8, 8, 0, 0})
	CMember(UAudioComponent*)                          PressedSoundAudioComponent                                  OFFSET(get<T>, {0x1A00, 8, 0, 0})
	CMember(ECommonInputType)                          CurrentInputType                                            OFFSET(get<T>, {0x1A08, 1, 0, 0})
	CMember(UTexture2D*)                               Icon                                                        OFFSET(get<T>, {0x1A10, 8, 0, 0})
	DMember(bool)                                      IconBeforeText                                              OFFSET(get<bool>, {0x1A18, 1, 0, 0})
	CMember(UMaterialInstance*)                        IconMaterial                                                OFFSET(get<T>, {0x1A20, 8, 0, 0})
	SMember(FVector2D)                                 LargeIconSize                                               OFFSET(getStruct<T>, {0x1A28, 16, 0, 0})
	SMember(FVector2D)                                 MediumIconSize                                              OFFSET(getStruct<T>, {0x1A38, 16, 0, 0})
	SMember(FVector2D)                                 SmallIconSize                                               OFFSET(getStruct<T>, {0x1A48, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHoldCompleted                                             OFFSET(getStruct<T>, {0x1A58, 16, 0, 0})
	DMember(double)                                    MobileFontSizeMultiplierSecondaryOverride                   OFFSET(get<double>, {0x1A68, 8, 0, 0})
	DMember(double)                                    CurrentHoldProgress                                         OFFSET(get<double>, {0x1A70, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 HoldProgressDynamicMaterial                                 OFFSET(get<T>, {0x1A78, 8, 0, 0})
	SMember(FMargin)                                   IconPadding                                                 OFFSET(getStruct<T>, {0x1A80, 16, 0, 0})
	DMember(bool)                                      PromptWithContent                                           OFFSET(get<bool>, {0x1A90, 1, 0, 0})
	SMember(FMargin)                                   PromptPadding                                               OFFSET(getStruct<T>, {0x1A94, 16, 0, 0})


	/// Functions
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.UnregisterBlocks
	// void UnregisterBlocks();                                                                                                 // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.RegisterBlocks
	// void RegisterBlocks();                                                                                                   // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.InitializeButton
	// void InitializeButton();                                                                                                 // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.Fade Out Sound
	// void Fade Out Sound();                                                                                                   // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.PlaySoundHoldCompleted
	// void PlaySoundHoldCompleted();                                                                                           // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.Stop Sound Hold Released
	// void Stop Sound Hold Released();                                                                                         // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.PlaySoundHoldPressed
	// void PlaySoundHoldPressed();                                                                                             // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.PlaySoundPressed
	// void PlaySoundPressed();                                                                                                 // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.PlaySoundHovered
	// void PlaySoundHovered();                                                                                                 // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.Cleanup
	// void Cleanup(UWidget* Widget);                                                                                           // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.AddBackground
	// void AddBackground();                                                                                                    // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.TryAddBackground
	// void TryAddBackground();                                                                                                 // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.UpdateBackground
	// void UpdateBackground();                                                                                                 // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.UpdateButtonSIze
	// void UpdateButtonSIze();                                                                                                 // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.UpdateFonts
	// void UpdateFonts();                                                                                                      // [0x101681c] Protected|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.IsPromptHoldable
	// void IsPromptHoldable(bool& Holdable);                                                                                   // [0x101681c] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetHoldPercentage
	// void SetHoldPercentage(double HeldPercentageValue);                                                                      // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetBorderMaterial
	// void SetBorderMaterial(UMaterialInstance* BorderMaterial, bool IsAdditive);                                              // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.IsPromptIcon
	// void IsPromptIcon(bool& Valid);                                                                                          // [0x101681c] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetButtonIsEnabled
	// void SetButtonIsEnabled();                                                                                               // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetLanguageDirection
	// void SetLanguageDirection();                                                                                             // [0x101681c] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.ShowPromptFallbackAction
	// void ShowPromptFallbackAction(bool Show);                                                                                // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.UpdatePrompt
	// void UpdatePrompt(ECommonInputType InputType);                                                                           // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetPrompt
	// void SetPrompt();                                                                                                        // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.UpdateButtonSizeToGrid
	// void UpdateButtonSizeToGrid();                                                                                           // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.UpdateIcon
	// void UpdateIcon();                                                                                                       // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetBackgroundMaterial
	// void SetBackgroundMaterial(UMaterialInstance* Background);                                                               // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetBackgroundVisibility
	// void SetBackgroundVisibility(bool Visible);                                                                              // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetIconMaterial
	// void SetIconMaterial(UMaterialInstance* IconMaterial);                                                                   // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.ResetButtonState
	// void ResetButtonState();                                                                                                 // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.ShowInputActionText
	// void ShowInputActionText();                                                                                              // [0x101681c] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetIcon
	// void SetIcon(UTexture2D* Icon);                                                                                          // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetButtonSize
	// void SetButtonSize(TEnumAsByte<ModularButtonSize> ButtonSize);                                                           // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_SetText
	// void BP_SetText(FText& Text);                                                                                            // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_SetSecondaryText
	// void BP_SetSecondaryText(FText& Text);                                                                                   // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.EventOnFocusedManually
	// void EventOnFocusedManually();                                                                                           // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnFocusReceived
	// void BP_OnFocusReceived();                                                                                               // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnFocusLost
	// void BP_OnFocusLost();                                                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.Construct
	// void Construct();                                                                                                        // [0x101681c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.OnActionProgress
	// void OnActionProgress(float HeldPercent);                                                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnInputMethodChanged
	// void BP_OnInputMethodChanged(ECommonInputType CurrentInputType);                                                         // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnInputActionUpdated
	// void BP_OnInputActionUpdated();                                                                                          // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnClicked
	// void BP_OnClicked();                                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnEnabled
	// void BP_OnEnabled();                                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnDisabled
	// void BP_OnDisabled();                                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.Destruct
	// void Destruct();                                                                                                         // [0x101681c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnInputActionTriggered
	// void BP_OnInputActionTriggered();                                                                                        // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnReleased
	// void BP_OnReleased();                                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnPressed
	// void BP_OnPressed();                                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnWidgetStyled
	// void BP_OnWidgetStyled();                                                                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x101681c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base
	// void ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base(int32_t EntryPoint);                                                      // [0x101681c] Final|HasDefaults    
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.OnHoldCompleted__DelegateSignature
	// void OnHoldCompleted__DelegateSignature();                                                                               // [0x101681c] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.OnFocusChanged__DelegateSignature
	// void OnFocusChanged__DelegateSignature(bool HasFocus);                                                                   // [0x101681c] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /FortUILibrary/Systems/Dialog/WBP_UIKit_Scrim.WBP_UIKit_Scrim_C
/// Size: 0x0051 (0x0002C0 - 0x000311)
class UWBP_UIKit_Scrim_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 785;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_FadeOut                                                OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_FadeIn                                                 OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UBackgroundBlur*)                          BlurWidget                                                  OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UButton*)                                  ClickCatcher                                                OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UBorder*)                                  DimBorder                                                   OFFSET(get<T>, {0x2E8, 8, 0, 0})
	DMember(double)                                    Blur                                                        OFFSET(get<double>, {0x2F0, 8, 0, 0})
	SMember(FLinearColor)                              Dim_Color                                                   OFFSET(getStruct<T>, {0x2F8, 16, 0, 0})
	CMember(UMaterialInstance*)                        Dim_Material                                                OFFSET(get<T>, {0x308, 8, 0, 0})
	DMember(bool)                                      UseClickCatcher                                             OFFSET(get<bool>, {0x310, 1, 0, 0})


	/// Functions
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Scrim.WBP_UIKit_Scrim_C.SetClickCatch
	// void SetClickCatch(bool Enable);                                                                                         // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Scrim.WBP_UIKit_Scrim_C.SetDimMaterial
	// void SetDimMaterial(UMaterialInstance* Material Instance);                                                               // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Scrim.WBP_UIKit_Scrim_C.SetDimColor
	// void SetDimColor(FLinearColor Color);                                                                                    // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Scrim.WBP_UIKit_Scrim_C.SetBlur
	// void SetBlur(float Blur Strength);                                                                                       // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Scrim.WBP_UIKit_Scrim_C.FadeOut
	// void FadeOut();                                                                                                          // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Scrim.WBP_UIKit_Scrim_C.FadeIn
	// void FadeIn();                                                                                                           // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Scrim.WBP_UIKit_Scrim_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x101681c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Scrim.WBP_UIKit_Scrim_C.ExecuteUbergraph_WBP_UIKit_Scrim
	// void ExecuteUbergraph_WBP_UIKit_Scrim(int32_t EntryPoint);                                                               // [0x101681c] Final                
};

/// Class /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C
/// Size: 0x04E0 (0x0002C0 - 0x0007A0)
class UWBP_UIKit_Dialog_Base_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1952;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C0, 8, 0, 0})
	CMember(UUIKitDialogViewModel*)                    UIKitDialogViewModel                                        OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_OnDeactivate_Base                                      OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_OnActivate_Base                                        OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UHorizontalBox*)                           ButtonsContainer                                            OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UGridPanel*)                               Content                                                     OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UGridPanel*)                               Main                                                        OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UGridPanel*)                               Root                                                        OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UScrollBox*)                               ScrollBox_Text                                              OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Dialog                                              OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UNamedSlot*)                               Slot_Background                                             OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UNamedSlot*)                               Slot_Content                                                OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UNamedSlot*)                               Slot_Main                                                   OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UNamedSlot*)                               Slot_Root                                                   OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(TArray<UWBP_UIKit_ButtonCTA_Base_C*>)      ButtonWidgets                                               OFFSET(get<T>, {0x330, 16, 0, 0})
	CMember(UCommonButtonGroupBase*)                   ButtonGroup                                                 OFFSET(get<T>, {0x340, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  DialogButtonClickedDispatcher                               OFFSET(getStruct<T>, {0x348, 16, 0, 0})
	CMember(UDataTable*)                               DefaultInputActionDataTable                                 OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UWBP_UIKit_Scrim_C*)                       Scrim                                                       OFFSET(get<T>, {0x360, 8, 0, 0})
	DMember(bool)                                      UseScrim                                                    OFFSET(get<bool>, {0x368, 1, 0, 0})
	DMember(double)                                    Blur                                                        OFFSET(get<double>, {0x370, 8, 0, 0})
	SMember(FLinearColor)                              DimColor                                                    OFFSET(getStruct<T>, {0x378, 16, 0, 0})
	CMember(UMaterialInstance*)                        DimMaterial                                                 OFFSET(get<T>, {0x388, 8, 0, 0})
	DMember(bool)                                      UseClickCatch                                               OFFSET(get<bool>, {0x390, 1, 0, 0})
	DMember(bool)                                      UseTitle                                                    OFFSET(get<bool>, {0x391, 1, 0, 0})
	CMember(UCommonTextBlock*)                         ContentTitle                                                OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(UCommonTextBlock*)                         ContentText                                                 OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     ContentRichText                                             OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(TEnumAsByte<E_UI_DialogTextType>)          UseText                                                     OFFSET(get<T>, {0x3B0, 1, 0, 0})
	SMember(FS_UI_Text)                                TitleProperties                                             OFFSET(getStruct<T>, {0x3B8, 192, 0, 0})
	SMember(FS_UI_Text)                                TextProperties                                              OFFSET(getStruct<T>, {0x478, 192, 0, 0})
	CMember(UImage*)                                   ContentImage                                                OFFSET(get<T>, {0x538, 8, 0, 0})
	DMember(bool)                                      UseImage                                                    OFFSET(get<bool>, {0x540, 1, 0, 0})
	SMember(FS_UI_Image)                               ImageProperties                                             OFFSET(getStruct<T>, {0x548, 88, 0, 0})
	DMember(bool)                                      ImageMatchTextureSize                                       OFFSET(get<bool>, {0x5A0, 1, 0, 0})
	CMember(UImage*)                                   ContentBackground                                           OFFSET(get<T>, {0x5A8, 8, 0, 0})
	DMember(bool)                                      UseBackplate                                                OFFSET(get<bool>, {0x5B0, 1, 0, 0})
	SMember(FS_UI_Backplate)                           BackplateProperties                                         OFFSET(getStruct<T>, {0x5B8, 80, 0, 0})
	DMember(bool)                                      UseBackground                                               OFFSET(get<bool>, {0x608, 1, 0, 0})
	SMember(FS_UI_Image)                               BackgroundProperties                                        OFFSET(getStruct<T>, {0x610, 88, 0, 0})
	SMember(FS_UI_SizeBox)                             DialogSIze                                                  OFFSET(getStruct<T>, {0x668, 128, 0, 0})
	SMember(FS_UI_DialogButtons)                       Buttons                                                     OFFSET(getStruct<T>, {0x6E8, 112, 0, 0})
	SMember(FS_UI_Placement)                           DialogPlacement                                             OFFSET(getStruct<T>, {0x758, 64, 0, 0})
	CMember(UWBP_UIKit_Backplate_Glass_C*)             ContentBackplate                                            OFFSET(get<T>, {0x798, 8, 0, 0})


	/// Functions
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetUIKitDialogViewModel
	// void SetUIKitDialogViewModel(UUIKitDialogViewModel* ViewModel);                                                          // [0x101681c] Final|Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.InitializeDialog
	// void InitializeDialog();                                                                                                 // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.PresetForDesignTime
	// void PresetForDesignTime();                                                                                              // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.Cleanup
	// void Cleanup(UWidget* Widget);                                                                                           // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.ClearButtonWidgets
	// void ClearButtonWidgets();                                                                                               // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetBackgroundProperties
	// void SetBackgroundProperties(FS_UI_Image& Data);                                                                         // [0x101681c] Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetBackplateProperties
	// void SetBackplateProperties(FS_UI_Backplate& Data);                                                                      // [0x101681c] Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.AddBackground
	// void AddBackground();                                                                                                    // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.AddBackplate
	// void AddBackplate();                                                                                                     // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetImageProperties
	// void SetImageProperties(FS_UI_Image& Data);                                                                              // [0x101681c] Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.AddImage
	// void AddImage();                                                                                                         // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetTextProperties
	// void SetTextProperties(FS_UI_Text Data);                                                                                 // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.AddText
	// void AddText();                                                                                                          // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetTitleProperties
	// void SetTitleProperties(FS_UI_Text Data);                                                                                // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.AddTitle
	// void AddTitle();                                                                                                         // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetScrim
	// void SetScrim(float Blur Strength, FLinearColor Color, UMaterialInstance* Material Instance, bool Enable);               // [0x101681c] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.AddScrim
	// void AddScrim();                                                                                                         // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetButtonFocus
	// void SetButtonFocus(int32_t& Focus Index);                                                                               // [0x101681c] Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetButton
	// void SetButton(UWBP_UIKit_ButtonCTA_Base_C*& Button, UUIKitDialogButtonViewModel* Button Data);                          // [0x101681c] Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetButtonsProperties
	// void SetButtonsProperties(FS_UI_DialogButtons& Data);                                                                    // [0x101681c] Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.DeactivateDialog
	// void DeactivateDialog(UWidgetAnimation* OutroAnimation);                                                                 // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.ActivateDialog
	// void ActivateDialog(UWidgetAnimation* IntroAnimation);                                                                   // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetDialogImage
	// void SetDialogImage(UTexture2D* Texture);                                                                                // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.AddDialogButtons
	// void AddDialogButtons(TArray<UUIKitDialogButtonViewModel*>& Action Buttons);                                             // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetDialogText
	// void SetDialogText(FText Text);                                                                                          // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetDialogTitle
	// void SetDialogTitle(FText Title);                                                                                        // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetDialogData
	// void SetDialogData(UUIKitDialogViewModel* Data);                                                                         // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetSizeBox
	// void SetSizeBox(FS_UI_SizeBox& Data);                                                                                    // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetGridNudge
	// void SetGridNudge(UWidget* Widget, FVector2D Nudge);                                                                     // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetGridPadding
	// void SetGridPadding(UWidget* Widget, FMargin Padding);                                                                   // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetGridLayer
	// void SetGridLayer(UWidget* Widget, int32_t Layer);                                                                       // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetGridAlignment
	// void SetGridAlignment(UWidget* Widget, TEnumAsByte<EHorizontalAlignment> Horizontal, TEnumAsByte<EVerticalAlignment> Vertical); // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetGridColumnAndRow
	// void SetGridColumnAndRow(UWidget* Widget, int32_t Row, int32_t Row Span, int32_t Column, int32_t Column Span);           // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetPlacement
	// void SetPlacement(UWidget* Widget, FS_UI_Placement Placement);                                                           // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.OnDialogButtonClicked
	// void OnDialogButtonClicked(UCommonButtonBase* AssociatedButton, int32_t ButtonIndex);                                    // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x101681c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.ExecuteUbergraph_WBP_UIKit_Dialog_Base
	// void ExecuteUbergraph_WBP_UIKit_Dialog_Base(int32_t EntryPoint);                                                         // [0x101681c] Final                
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.DialogButtonClickedDispatcher__DelegateSignature
	// void DialogButtonClickedDispatcher__DelegateSignature(int32_t ButtonIndex);                                              // [0x101681c] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Struct /FortUILibrary/Systems/Data/Structs/S_UI_BoolFloat.S_UI_BoolFloat
/// Size: 0x0010 (0x000000 - 0x000010)
class FS_UI_BoolFloat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      Enable_3_B063D53B491DF2572FE403B2A6860845                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(double)                                    Value_4_020FC33445ADC28A639893BBEE6C8D72                    OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /FortUILibrary/Systems/Data/Structs/S_UI_GridCell.S_UI_GridCell
/// Size: 0x0028 (0x000000 - 0x000028)
class FS_UI_GridCell : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   Row_15_A94CBD4C4E96C298CF51F6B49895AE3D                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   RowSpan_17_A0786E70484526B60C8B42A95AD3AB35                 OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Column_19_EE61B90B4EE25EADECB506AEC3137A46                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ColumnSpan_21_37271BC54501DA614C3829B82CDFEA3E              OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Layer_23_5EB8311C4EBCD402805DEE9E676A7772                   OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FVector2D)                                 Nudge_26_A5E5651A47EF74CCA30424AB0F22341D                   OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /FortUILibrary/Systems/Data/Structs/S_UI_Placement.S_UI_Placement
/// Size: 0x0040 (0x000000 - 0x000040)
class FS_UI_Placement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment_4_A94CBD4C4E96C298CF51F6B49895AE3D      OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment_5_BC3E4CD143DBC026850F4BAE098F6937        OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FMargin)                                   Padding_8_030D86C14EBE7996733C89A951279A61                  OFFSET(getStruct<T>, {0x4, 16, 0, 0})
	SMember(FS_UI_GridCell)                            Grid_20_3148B55D43C5889FC5D1FF82667A7D01                    OFFSET(getStruct<T>, {0x18, 40, 0, 0})
};

/// Struct /FortUILibrary/Systems/Data/Structs/S_UI_Image.S_UI_Image
/// Size: 0x0058 (0x000000 - 0x000058)
class FS_UI_Image : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FS_UI_Placement)                           Placement_67_A94CBD4C4E96C298CF51F6B49895AE3D               OFFSET(getStruct<T>, {0x0, 64, 0, 0})
	SMember(FVector2D)                                 ImageSize_72_3E7C183E49CE6543B65BBEB8E5C3DEF9               OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(UMaterialInstance*)                        Material_75_7A7C63B046ADDD7A04B8F3AB7F3C30C4                OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /FortUILibrary/Systems/Data/Structs/S_UI_Backplate.S_UI_Backplate
/// Size: 0x0050 (0x000000 - 0x000050)
class FS_UI_Backplate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FS_UI_Placement)                           Placement_84_BB10D20A41D92A25F6912CB8B8544AD0               OFFSET(getStruct<T>, {0x0, 64, 0, 0})
	CMember(TEnumAsByte<E_UI_BackplateBrightness>)     Brightness_85_A94CBD4C4E96C298CF51F6B49895AE3D              OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(TEnumAsByte<E_UI_BackplateCornerRadius>)   CornerRadius_86_3E7C183E49CE6543B65BBEB8E5C3DEF9            OFFSET(get<T>, {0x41, 1, 0, 0})
	DMember(double)                                    Blur_81_7A7C63B046ADDD7A04B8F3AB7F3C30C4                    OFFSET(get<double>, {0x48, 8, 0, 0})
};

/// Struct /FortUILibrary/Systems/Data/Structs/S_UI_SizeBox.S_UI_SizeBox
/// Size: 0x0080 (0x000000 - 0x000080)
class FS_UI_SizeBox : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FS_UI_BoolFloat)                           WidthOverride_107_37121FBF4933532CED9F6C80636E0756          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FS_UI_BoolFloat)                           HeightOverride_108_73ED716E45F2027D3E2CB5ABBCD3D249         OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FS_UI_BoolFloat)                           MinDesiredWidth_109_7BCFCAAC4DE9BA1CBEB0C085AE54DB76        OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FS_UI_BoolFloat)                           MinDesiredHeight_110_C7F977F64FD9F7B719787CBC2B116808       OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FS_UI_BoolFloat)                           MaxDesiredWidth_111_693561ED4DB2A6CDE54F51BA1B0F341D        OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FS_UI_BoolFloat)                           MaxDesiredHeight_112_6F2C797849AEA86E6E9C848808E4376E       OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FS_UI_BoolFloat)                           MinAspectRatio_113_6BFE81D541008532B3EB5B9C50732063         OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FS_UI_BoolFloat)                           MaxAspectRatio_114_1E8A3C744D97847FEF43F19D9F0EAC69         OFFSET(getStruct<T>, {0x70, 16, 0, 0})
};

/// Struct /FortUILibrary/Systems/Dialog/Data/Structs/S_UI_DialogButtons.S_UI_DialogButtons
/// Size: 0x006C (0x000000 - 0x00006C)
class FS_UI_DialogButtons : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 108;

public:
	SMember(FS_UI_Placement)                           GroupPlacement_71_A94CBD4C4E96C298CF51F6B49895AE3D          OFFSET(getStruct<T>, {0x0, 64, 0, 0})
	DMember(double)                                    SpaceBetweenButtons_62_39091237442DEAE1CAFAE3AB75A757F1     OFFSET(get<double>, {0x40, 8, 0, 0})
	CMember(TEnumAsByte<ModularButtonSize>)            EachButtonSize_74_7A1E34E243F1F10533E9EA910463B328          OFFSET(get<T>, {0x48, 1, 0, 0})
	DMember(int32_t)                                   EachButtonMinWidth_77_CA4A0FEF4CF6FF0700E0DB8F95AC917B      OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	DMember(bool)                                      EachButtonHorizontalFill_87_3A1B89E0481CE49778D5E39C0BD7E90C OFFSET(get<bool>, {0x50, 1, 0, 0})
	CMember(TArray<TEnumAsByte>)                       CTAButtonsTypes_89_963DA1ED40E4193862297D976DA12A11         OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(int32_t)                                   FocuseButton_85_CC6A212C4012DDFDC810689A87324E54            OFFSET(get<int32_t>, {0x68, 4, 0, 0})
};

/// Struct /FortUILibrary/Systems/Data/Structs/S_UI_Text.S_UI_Text
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FS_UI_Text : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FS_UI_Placement)                           Placement_67_A94CBD4C4E96C298CF51F6B49895AE3D               OFFSET(getStruct<T>, {0x0, 64, 0, 0})
	SMember(FSlateFontInfo)                            Font_45_B587C32B43943172D2272F8558ACC8B2                    OFFSET(getStruct<T>, {0x40, 88, 0, 0})
	SMember(FSlateColor)                               Color_65_9CB9A5174FD065187E30878106948A3B                   OFFSET(getStruct<T>, {0x98, 20, 0, 0})
	CMember(ETextTransformPolicy)                      TransformPolicy_49_52395AC7440E291527A8768E37D08B2A         OFFSET(get<T>, {0xAC, 1, 0, 0})
	CMember(TEnumAsByte<ETextJustify>)                 Justification_52_5897D4F946C704E9C5D67E9DD207EF16           OFFSET(get<T>, {0xAD, 1, 0, 0})
	DMember(double)                                    LineHeightPercentage_55_2509C2B04F6144283C7BADBF36AAA8F6    OFFSET(get<double>, {0xB0, 8, 0, 0})
	DMember(bool)                                      AutoWrapText_58_064D5C3A4DD3D362216942A761DDC8D0            OFFSET(get<bool>, {0xB8, 1, 0, 0})
	DMember(int32_t)                                   WrapTextAt_68_39091237442DEAE1CAFAE3AB75A757F1              OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
};

/// Enum /FortUILibrary/Systems/Tabs/Data/E_UI_Alignment.E_UI_Alignment
/// Size: 0x05
enum E_UI_Alignment : uint8_t
{
	E_UI_Alignment__NewEnumerator00                                                  = 0,
	E_UI_Alignment__NewEnumerator11                                                  = 1,
	E_UI_Alignment__NewEnumerator22                                                  = 2,
	E_UI_Alignment__NewEnumerator33                                                  = 3,
	E_UI_Alignment__E_UI_MAX4                                                        = 4
};

/// Enum /FortUILibrary/Systems/Backplate/Data/E_UI_BackplateBrightness.E_UI_BackplateBrightness
/// Size: 0x05
enum E_UI_BackplateBrightness : uint8_t
{
	E_UI_BackplateBrightness__NewEnumerator00                                        = 0,
	E_UI_BackplateBrightness__NewEnumerator11                                        = 1,
	E_UI_BackplateBrightness__NewEnumerator22                                        = 2,
	E_UI_BackplateBrightness__NewEnumerator33                                        = 3,
	E_UI_BackplateBrightness__E_UI_MAX4                                              = 4
};

/// Enum /FortUILibrary/Systems/Backplate/Data/E_UI_BackplateCornerRadius.E_UI_BackplateCornerRadius
/// Size: 0x05
enum E_UI_BackplateCornerRadius : uint8_t
{
	E_UI_BackplateCornerRadius__NewEnumerator00                                      = 0,
	E_UI_BackplateCornerRadius__NewEnumerator11                                      = 1,
	E_UI_BackplateCornerRadius__NewEnumerator32                                      = 2,
	E_UI_BackplateCornerRadius__NewEnumerator43                                      = 3,
	E_UI_BackplateCornerRadius__E_UI_MAX4                                            = 4
};

/// Enum /FortUILibrary/Systems/ModularButton/ModularButtonSize.ModularButtonSize
/// Size: 0x04
enum ModularButtonSize : uint8_t
{
	ModularButtonSize__NewEnumerator00                                               = 0,
	ModularButtonSize__NewEnumerator11                                               = 1,
	ModularButtonSize__NewEnumerator22                                               = 2,
	ModularButtonSize__ModularButtonSize_MAX3                                        = 3
};

/// Enum /FortUILibrary/Systems/ModularButton/Data/E_UI_CTAButtonType.E_UI_CTAButtonType
/// Size: 0x04
enum E_UI_CTAButtonType : uint8_t
{
	E_UI_CTAButtonType__NewEnumerator00                                              = 0,
	E_UI_CTAButtonType__NewEnumerator11                                              = 1,
	E_UI_CTAButtonType__NewEnumerator22                                              = 2,
	E_UI_CTAButtonType__E_UI_MAX3                                                    = 3
};

/// Enum /FortUILibrary/Systems/Dialog/Data/E_UI_DialogTextType.E_UI_DialogTextType
/// Size: 0x04
enum E_UI_DialogTextType : uint8_t
{
	E_UI_DialogTextType__NewEnumerator00                                             = 0,
	E_UI_DialogTextType__NewEnumerator11                                             = 1,
	E_UI_DialogTextType__NewEnumerator22                                             = 2,
	E_UI_DialogTextType__E_UI_MAX3                                                   = 3
};

/// Enum /FortUILibrary/Systems/Dialog/Data/E_UI_ButtonVisualType.E_UI_ButtonVisualType
/// Size: 0x04
enum E_UI_ButtonVisualType : uint8_t
{
	E_UI_ButtonVisualType__NewEnumerator00                                           = 0,
	E_UI_ButtonVisualType__NewEnumerator11                                           = 1,
	E_UI_ButtonVisualType__NewEnumerator22                                           = 2,
	E_UI_ButtonVisualType__E_UI_MAX3                                                 = 3
};

