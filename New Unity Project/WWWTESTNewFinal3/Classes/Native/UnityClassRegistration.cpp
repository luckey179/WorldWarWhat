template <typename T> void RegisterClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_Vehicles();
	RegisterModule_Vehicles();

	void RegisterModule_Wind();
	RegisterModule_Wind();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterClass<Behaviour>(const char*);
class Animation; template <> void RegisterClass<Animation>(const char*);
class Animator; template <> void RegisterClass<Animator>(const char*);
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterClass<AudioListener>(const char*);
class AudioSource; template <> void RegisterClass<AudioSource>(const char*);
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterClass<Collider2D>(const char*);
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>(const char*);
class GUIElement; template <> void RegisterClass<GUIElement>(const char*);
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterClass<TextRenderingPrivate::GUIText>(const char*);
class GUITexture; template <> void RegisterClass<GUITexture>(const char*);
class GUILayer; template <> void RegisterClass<GUILayer>(const char*);
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; template <> void RegisterClass<LensFlare>(const char*);
class Light; template <> void RegisterClass<Light>(const char*);
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>(const char*);
class NavMeshAgent; template <> void RegisterClass<NavMeshAgent>(const char*);
class NavMeshObstacle; 
class NetworkView; template <> void RegisterClass<NetworkView>(const char*);
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; template <> void RegisterClass<ReflectionProbe>(const char*);
class Skybox; template <> void RegisterClass<Skybox>(const char*);
class SortingGroup; 
class Terrain; template <> void RegisterClass<Terrain>(const char*);
class VideoPlayer; 
class WindZone; template <> void RegisterClass<WindZone>(const char*);
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterClass<Collider>(const char*);
class BoxCollider; template <> void RegisterClass<BoxCollider>(const char*);
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>(const char*);
class CharacterController; template <> void RegisterClass<CharacterController>(const char*);
class MeshCollider; template <> void RegisterClass<MeshCollider>(const char*);
class SphereCollider; template <> void RegisterClass<SphereCollider>(const char*);
class TerrainCollider; template <> void RegisterClass<TerrainCollider>(const char*);
class WheelCollider; template <> void RegisterClass<WheelCollider>(const char*);
namespace Unity { class Joint; } template <> void RegisterClass<Unity::Joint>(const char*);
namespace Unity { class CharacterJoint; } template <> void RegisterClass<Unity::CharacterJoint>(const char*);
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } template <> void RegisterClass<Unity::HingeJoint>(const char*);
namespace Unity { class SpringJoint; } template <> void RegisterClass<Unity::SpringJoint>(const char*);
class LODGroup; template <> void RegisterClass<LODGroup>(const char*);
class MeshFilter; template <> void RegisterClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; template <> void RegisterClass<ParticleAnimator>(const char*);
class ParticleEmitter; template <> void RegisterClass<ParticleEmitter>(const char*);
class EllipsoidParticleEmitter; template <> void RegisterClass<EllipsoidParticleEmitter>(const char*);
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterClass<Renderer>(const char*);
class BillboardRenderer; template <> void RegisterClass<BillboardRenderer>(const char*);
class LineRenderer; template <> void RegisterClass<LineRenderer>(const char*);
class MeshRenderer; template <> void RegisterClass<MeshRenderer>(const char*);
class ParticleRenderer; template <> void RegisterClass<ParticleRenderer>(const char*);
class ParticleSystemRenderer; template <> void RegisterClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; template <> void RegisterClass<SkinnedMeshRenderer>(const char*);
class SpriteMask; 
class SpriteRenderer; 
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; template <> void RegisterClass<TrailRenderer>(const char*);
class Rigidbody; template <> void RegisterClass<Rigidbody>(const char*);
class Rigidbody2D; template <> void RegisterClass<Rigidbody2D>(const char*);
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterClass<TextRenderingPrivate::TextMesh>(const char*);
class Transform; template <> void RegisterClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>(const char*);
class Tree; template <> void RegisterClass<Tree>(const char*);
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>(const char*);
class NamedObject; template <> void RegisterClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AssetImporterLog; 
class AudioMixer; template <> void RegisterClass<AudioMixer>(const char*);
class AudioMixerController; 
class AudioMixerGroup; template <> void RegisterClass<AudioMixerGroup>(const char*);
class AudioMixerGroupController; 
class AudioMixerSnapshot; template <> void RegisterClass<AudioMixerSnapshot>(const char*);
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterClass<Avatar>(const char*);
class AvatarMask; template <> void RegisterClass<AvatarMask>(const char*);
class BillboardAsset; template <> void RegisterClass<BillboardAsset>(const char*);
class ComputeShader; 
class Flare; template <> void RegisterClass<Flare>(const char*);
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>(const char*);
class GameObjectRecorder; 
class LightProbes; template <> void RegisterClass<LightProbes>(const char*);
class Material; template <> void RegisterClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>(const char*);
class Motion; template <> void RegisterClass<Motion>(const char*);
class AnimationClip; template <> void RegisterClass<AnimationClip>(const char*);
class PreviewAnimationClip; 
class NavMeshData; template <> void RegisterClass<NavMeshData>(const char*);
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>(const char*);
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>(const char*);
class AnimatorController; template <> void RegisterClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterClass<AudioClip>(const char*);
class Shader; template <> void RegisterClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; template <> void RegisterClass<SpeedTreeWindAsset>(const char*);
class Sprite; template <> void RegisterClass<Sprite>(const char*);
class SpriteAtlas; 
class SubstanceArchive; 
class TerrainData; template <> void RegisterClass<TerrainData>(const char*);
class TextAsset; template <> void RegisterClass<TextAsset>(const char*);
class CGProgram; template <> void RegisterClass<CGProgram>(const char*);
class MonoScript; template <> void RegisterClass<MonoScript>(const char*);
class Texture; template <> void RegisterClass<Texture>(const char*);
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>(const char*);
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterClass<Texture3D>(const char*);
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterClass<BuildSettings>(const char*);
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>(const char*);
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterClass<InputManager>(const char*);
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>(const char*);
class MonoManager; template <> void RegisterClass<MonoManager>(const char*);
class NavMeshProjectSettings; template <> void RegisterClass<NavMeshProjectSettings>(const char*);
class NetworkManager; template <> void RegisterClass<NetworkManager>(const char*);
class PerformanceReportingManager; 
class Physics2DSettings; template <> void RegisterClass<Physics2DSettings>(const char*);
class PhysicsManager; template <> void RegisterClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterClass<ScriptMapper>(const char*);
class TagManager; template <> void RegisterClass<TagManager>(const char*);
class TimeManager; template <> void RegisterClass<TimeManager>(const char*);
class UnityAnalyticsManager; 
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>(const char*);
class LevelGameManager; template <> void RegisterClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterClass<LightmapSettings>(const char*);
class NavMeshSettings; template <> void RegisterClass<NavMeshSettings>(const char*);
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>(const char*);
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 121 non stripped classes
	//0. Behaviour
	RegisterClass<Behaviour>("Core");
	//1. Unity::Component
	RegisterClass<Unity::Component>("Core");
	//2. EditorExtension
	RegisterClass<EditorExtension>("Core");
	//3. Camera
	RegisterClass<Camera>("Core");
	//4. GameObject
	RegisterClass<GameObject>("Core");
	//5. GUIElement
	RegisterClass<GUIElement>("Core");
	//6. GUITexture
	RegisterClass<GUITexture>("Core");
	//7. GUILayer
	RegisterClass<GUILayer>("Core");
	//8. Light
	RegisterClass<Light>("Core");
	//9. NetworkView
	RegisterClass<NetworkView>("Core");
	//10. ReflectionProbe
	RegisterClass<ReflectionProbe>("Core");
	//11. Shader
	RegisterClass<Shader>("Core");
	//12. NamedObject
	RegisterClass<NamedObject>("Core");
	//13. Material
	RegisterClass<Material>("Core");
	//14. Sprite
	RegisterClass<Sprite>("Core");
	//15. Texture
	RegisterClass<Texture>("Core");
	//16. Texture2D
	RegisterClass<Texture2D>("Core");
	//17. Texture3D
	RegisterClass<Texture3D>("Core");
	//18. RenderTexture
	RegisterClass<RenderTexture>("Core");
	//19. Transform
	RegisterClass<Transform>("Core");
	//20. UI::RectTransform
	RegisterClass<UI::RectTransform>("Core");
	//21. QualitySettings
	RegisterClass<QualitySettings>("Core");
	//22. GlobalGameManager
	RegisterClass<GlobalGameManager>("Core");
	//23. GameManager
	RegisterClass<GameManager>("Core");
	//24. TrailRenderer
	RegisterClass<TrailRenderer>("Core");
	//25. Renderer
	RegisterClass<Renderer>("Core");
	//26. LineRenderer
	RegisterClass<LineRenderer>("Core");
	//27. RenderSettings
	RegisterClass<RenderSettings>("Core");
	//28. LevelGameManager
	RegisterClass<LevelGameManager>("Core");
	//29. Skybox
	RegisterClass<Skybox>("Core");
	//30. MeshFilter
	RegisterClass<MeshFilter>("Core");
	//31. SkinnedMeshRenderer
	RegisterClass<SkinnedMeshRenderer>("Core");
	//32. Mesh
	RegisterClass<Mesh>("Core");
	//33. MonoBehaviour
	RegisterClass<MonoBehaviour>("Core");
	//34. ParticleSystem
	RegisterClass<ParticleSystem>("ParticleSystem");
	//35. AudioClip
	RegisterClass<AudioClip>("Audio");
	//36. SampleClip
	RegisterClass<SampleClip>("Audio");
	//37. AudioListener
	RegisterClass<AudioListener>("Audio");
	//38. AudioBehaviour
	RegisterClass<AudioBehaviour>("Audio");
	//39. AudioSource
	RegisterClass<AudioSource>("Audio");
	//40. AudioMixer
	RegisterClass<AudioMixer>("Audio");
	//41. AudioMixerSnapshot
	RegisterClass<AudioMixerSnapshot>("Audio");
	//42. AudioMixerGroup
	RegisterClass<AudioMixerGroup>("Audio");
	//43. Rigidbody
	RegisterClass<Rigidbody>("Physics");
	//44. Unity::Joint
	RegisterClass<Unity::Joint>("Physics");
	//45. Unity::HingeJoint
	RegisterClass<Unity::HingeJoint>("Physics");
	//46. Unity::SpringJoint
	RegisterClass<Unity::SpringJoint>("Physics");
	//47. Collider
	RegisterClass<Collider>("Physics");
	//48. BoxCollider
	RegisterClass<BoxCollider>("Physics");
	//49. SphereCollider
	RegisterClass<SphereCollider>("Physics");
	//50. MeshCollider
	RegisterClass<MeshCollider>("Physics");
	//51. CapsuleCollider
	RegisterClass<CapsuleCollider>("Physics");
	//52. CharacterController
	RegisterClass<CharacterController>("Physics");
	//53. WheelCollider
	RegisterClass<WheelCollider>("Vehicles");
	//54. AnimationClip
	RegisterClass<AnimationClip>("Animation");
	//55. Motion
	RegisterClass<Motion>("Animation");
	//56. Animation
	RegisterClass<Animation>("Animation");
	//57. Animator
	RegisterClass<Animator>("Animation");
	//58. AnimatorOverrideController
	RegisterClass<AnimatorOverrideController>("Animation");
	//59. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>("Animation");
	//60. UI::Canvas
	RegisterClass<UI::Canvas>("UI");
	//61. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>("UI");
	//62. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>("UI");
	//63. TextRenderingPrivate::GUIText
	RegisterClass<TextRenderingPrivate::GUIText>("TextRendering");
	//64. TextRendering::Font
	RegisterClass<TextRendering::Font>("TextRendering");
	//65. NavMeshAgent
	RegisterClass<NavMeshAgent>("AI");
	//66. Rigidbody2D
	RegisterClass<Rigidbody2D>("Physics2D");
	//67. Collider2D
	RegisterClass<Collider2D>("Physics2D");
	//68. Terrain
	RegisterClass<Terrain>("Terrain");
	//69. TerrainData
	RegisterClass<TerrainData>("Terrain");
	//70. ParticleRenderer
	RegisterClass<ParticleRenderer>("ParticlesLegacy");
	//71. ParticleSystemRenderer
	RegisterClass<ParticleSystemRenderer>("ParticleSystem");
	//72. FlareLayer
	RegisterClass<FlareLayer>("Core");
	//73. MeshRenderer
	RegisterClass<MeshRenderer>("Core");
	//74. PreloadData
	RegisterClass<PreloadData>("Core");
	//75. Cubemap
	RegisterClass<Cubemap>("Core");
	//76. Texture2DArray
	RegisterClass<Texture2DArray>("Core");
	//77. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>("Core");
	//78. TagManager
	RegisterClass<TagManager>("Core");
	//79. GraphicsSettings
	RegisterClass<GraphicsSettings>("Core");
	//80. DelayedCallManager
	RegisterClass<DelayedCallManager>("Core");
	//81. InputManager
	RegisterClass<InputManager>("Core");
	//82. TimeManager
	RegisterClass<TimeManager>("Core");
	//83. BuildSettings
	RegisterClass<BuildSettings>("Core");
	//84. ResourceManager
	RegisterClass<ResourceManager>("Core");
	//85. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>("Core");
	//86. MasterServerInterface
	RegisterClass<MasterServerInterface>("Core");
	//87. NetworkManager
	RegisterClass<NetworkManager>("Core");
	//88. ScriptMapper
	RegisterClass<ScriptMapper>("Core");
	//89. PhysicsManager
	RegisterClass<PhysicsManager>("Physics");
	//90. MonoManager
	RegisterClass<MonoManager>("Core");
	//91. MonoScript
	RegisterClass<MonoScript>("Core");
	//92. TextAsset
	RegisterClass<TextAsset>("Core");
	//93. AudioManager
	RegisterClass<AudioManager>("Audio");
	//94. PlayerSettings
	RegisterClass<PlayerSettings>("Core");
	//95. NavMeshProjectSettings
	RegisterClass<NavMeshProjectSettings>("AI");
	//96. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>("CloudWebServices");
	//97. Physics2DSettings
	RegisterClass<Physics2DSettings>("Physics2D");
	//98. UnityConnectSettings
	RegisterClass<UnityConnectSettings>("UnityConnect");
	//99. AnimatorController
	RegisterClass<AnimatorController>("Animation");
	//100. SpeedTreeWindAsset
	RegisterClass<SpeedTreeWindAsset>("Terrain");
	//101. LightProbes
	RegisterClass<LightProbes>("Core");
	//102. LightmapSettings
	RegisterClass<LightmapSettings>("Core");
	//103. BillboardAsset
	RegisterClass<BillboardAsset>("Core");
	//104. BillboardRenderer
	RegisterClass<BillboardRenderer>("Core");
	//105. LODGroup
	RegisterClass<LODGroup>("Core");
	//106. TextRenderingPrivate::TextMesh
	RegisterClass<TextRenderingPrivate::TextMesh>("TextRendering");
	//107. Tree
	RegisterClass<Tree>("Terrain");
	//108. WindZone
	RegisterClass<WindZone>("Wind");
	//109. AvatarMask
	RegisterClass<AvatarMask>("Animation");
	//110. Flare
	RegisterClass<Flare>("Core");
	//111. CGProgram
	RegisterClass<CGProgram>("Core");
	//112. Avatar
	RegisterClass<Avatar>("Animation");
	//113. TerrainCollider
	RegisterClass<TerrainCollider>("TerrainPhysics");
	//114. LensFlare
	RegisterClass<LensFlare>("Core");
	//115. Unity::CharacterJoint
	RegisterClass<Unity::CharacterJoint>("Physics");
	//116. EllipsoidParticleEmitter
	RegisterClass<EllipsoidParticleEmitter>("ParticlesLegacy");
	//117. ParticleEmitter
	RegisterClass<ParticleEmitter>("ParticlesLegacy");
	//118. ParticleAnimator
	RegisterClass<ParticleAnimator>("ParticlesLegacy");
	//119. NavMeshSettings
	RegisterClass<NavMeshSettings>("AI");
	//120. NavMeshData
	RegisterClass<NavMeshData>("AI");

}
