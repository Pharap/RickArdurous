﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Runtime Version:4.0.30319.42000
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

namespace RickArdurousEditor.Properties {
    using System;
    
    
    /// <summary>
    ///   A strongly-typed resource class, for looking up localized strings, etc.
    /// </summary>
    // This class was auto-generated by the StronglyTypedResourceBuilder
    // class via a tool like ResGen or Visual Studio.
    // To add or remove a member, edit your .ResX file then rerun ResGen
    // with the /str option, or rebuild your VS project.
    [global::System.CodeDom.Compiler.GeneratedCodeAttribute("System.Resources.Tools.StronglyTypedResourceBuilder", "16.0.0.0")]
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
    [global::System.Runtime.CompilerServices.CompilerGeneratedAttribute()]
    internal class Resources {
        
        private static global::System.Resources.ResourceManager resourceMan;
        
        private static global::System.Globalization.CultureInfo resourceCulture;
        
        [global::System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode")]
        internal Resources() {
        }
        
        /// <summary>
        ///   Returns the cached ResourceManager instance used by this class.
        /// </summary>
        [global::System.ComponentModel.EditorBrowsableAttribute(global::System.ComponentModel.EditorBrowsableState.Advanced)]
        internal static global::System.Resources.ResourceManager ResourceManager {
            get {
                if (object.ReferenceEquals(resourceMan, null)) {
                    global::System.Resources.ResourceManager temp = new global::System.Resources.ResourceManager("RickArdurousEditor.Properties.Resources", typeof(Resources).Assembly);
                    resourceMan = temp;
                }
                return resourceMan;
            }
        }
        
        /// <summary>
        ///   Overrides the current thread's CurrentUICulture property for all
        ///   resource lookups using this strongly typed resource class.
        /// </summary>
        [global::System.ComponentModel.EditorBrowsableAttribute(global::System.ComponentModel.EditorBrowsableState.Advanced)]
        internal static global::System.Globalization.CultureInfo Culture {
            get {
                return resourceCulture;
            }
            set {
                resourceCulture = value;
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to Add Item ¤.
        /// </summary>
        internal static string ActionAddItem {
            get {
                return ResourceManager.GetString("ActionAddItem", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to Adjust Sensor.
        /// </summary>
        internal static string ActionAdjustSensor {
            get {
                return ResourceManager.GetString("ActionAdjustSensor", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to Delete Item ¤.
        /// </summary>
        internal static string ActionDeleteItem {
            get {
                return ResourceManager.GetString("ActionDeleteItem", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to Move Item ¤.
        /// </summary>
        internal static string ActionMoveItem {
            get {
                return ResourceManager.GetString("ActionMoveItem", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized resource of type System.Drawing.Bitmap.
        /// </summary>
        internal static System.Drawing.Bitmap DeleteIcon {
            get {
                object obj = ResourceManager.GetObject("DeleteIcon", resourceCulture);
                return ((System.Drawing.Bitmap)(obj));
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to The editor has detected a cyclic path in the chain of puzzle screen. Rick Ardurous does not support loops in the puzzle screens. The Map cannot be exported..
        /// </summary>
        internal static string ErrorCyclicPuzzlePathDetected {
            get {
                return ResourceManager.GetString("ErrorCyclicPuzzlePathDetected", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to Dead End detected, the editor didn&apos;t find any exit in the screen located at (¤,¤¤). The Map cannot be exported..
        /// </summary>
        internal static string ErrorDeadEndNotExitFound {
            get {
                return ResourceManager.GetString("ErrorDeadEndNotExitFound", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to There&apos;s already a Graal on the Map, and the Map can only have one (this is the final goal, place it in the final puzzle screen)..
        /// </summary>
        internal static string ErrorMapCanOnlyHaveOneGraal {
            get {
                return ResourceManager.GetString("ErrorMapCanOnlyHaveOneGraal", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to There&apos;s no Graal in the Map. Please place a Graal item in the last Puzzle screen. The Map cannot be exported..
        /// </summary>
        internal static string ErrorNoEndPuzzleScreen {
            get {
                return ResourceManager.GetString("ErrorNoEndPuzzleScreen", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized string similar to There&apos;s no Start Rick respawn point in the Map (cyan color). The Map cannot be exported..
        /// </summary>
        internal static string ErrorNoStartPuzzleScreen {
            get {
                return ResourceManager.GetString("ErrorNoStartPuzzleScreen", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Looks up a localized resource of type System.Drawing.Icon similar to (Icon).
        /// </summary>
        internal static System.Drawing.Icon MainApplicationIcon {
            get {
                object obj = ResourceManager.GetObject("MainApplicationIcon", resourceCulture);
                return ((System.Drawing.Icon)(obj));
            }
        }
        
        /// <summary>
        ///   Looks up a localized resource of type System.Drawing.Bitmap.
        /// </summary>
        internal static System.Drawing.Bitmap MirrorIcon {
            get {
                object obj = ResourceManager.GetObject("MirrorIcon", resourceCulture);
                return ((System.Drawing.Bitmap)(obj));
            }
        }
        
        /// <summary>
        ///   Looks up a localized resource of type System.Drawing.Bitmap.
        /// </summary>
        internal static System.Drawing.Bitmap PuzzlePathIcon {
            get {
                object obj = ResourceManager.GetObject("PuzzlePathIcon", resourceCulture);
                return ((System.Drawing.Bitmap)(obj));
            }
        }
        
        /// <summary>
        ///   Looks up a localized resource of type System.Drawing.Bitmap.
        /// </summary>
        internal static System.Drawing.Bitmap RespawnPointType {
            get {
                object obj = ResourceManager.GetObject("RespawnPointType", resourceCulture);
                return ((System.Drawing.Bitmap)(obj));
            }
        }
    }
}
