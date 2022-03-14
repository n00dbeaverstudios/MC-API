// This is a free and open source plugin based on the MIT license for Marketplace Creators to leverage API calls in their own assets.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MCInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UMCInterface : public UInterface
{
	GENERATED_BODY()
};

/*
  
  "MCAPI|Interface" category is reserved for the base interface class, nest your own categories off this, i.e., "MCAPI|Interface|n00dbeaverStudios|MyProduct"
  
  All interface functions are appended with MC to avoid naming conflicts. You are encouraged to append MC to your own interface functions also, for consistency. 

 */
class MCAPI_API IMCInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

///////////////////////////////////////////////////////////////
// PUBLICLY ACCESSIBLE DATA 
///////////////////////////////////////////////////////////////

	// These must be filled out in C++ to return the desired strings. 

	// Get the plugin URL for the creator's Store Page
		void MCGetPluginURL(FString & URL);
	// Get the custom message the creator has implemented 
		void MCGetPluginMessage(FString & Message);


///////////////////////////////////////////////////////////////
// NOTIFICATIONS
///////////////////////////////////////////////////////////////


	// A standard notification for a simple message
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "MCAPI|Interface")
		void MCStdNotification(const FString & Message);
	// Notification that will contain a link to the store page and a message
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "MCAPI|Interface")
		void MCNotifyStorePage(const FText & Message, const FString & URL);


///////////////////////////////////////////////////////////////
// CHECKS
///////////////////////////////////////////////////////////////
	

	// Check to see if the plugin is available
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "MCAPI|Interface")
		void MCPluginCheck(bool & Contains);
};
